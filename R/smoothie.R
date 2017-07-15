#' Smooth plot
#'
#'


smoothie = function(x,y,v = NULL,resol,radius,col){

  # determine canvas bounds
  range_x = range(x,na.rm=T)
  range_y = range(y,na.rm=T)
  mid_x   = range_x[1] + diff(range_x) / 2
  mid_y   = range_y[1] + diff(range_y) / 2
  range_x = mid_x + (range_x - mid_x) * 1.02
  range_y = mid_y + (range_y - mid_y) * 1.02
  bounds = c(range_x[1],range_y[1],range_x[2],range_y[2])

  # Determine pixel size
  margin  = ceiling(radius * 2) + ceiling(radius * 2)
  xres_m  = xres - margin - 1
  px_size = diff(range_x) / xres_m

  # range of pixels plus white space around image
  xs = 0 : (xres_m + margin) + 1
  ys = 0 : (yres_m + ceiling(smooth_radius * 2) + ceiling(smooth_radius * 2)) + 1

  # Remove points outside of bounds
  pts = data.frame(x,y)
  pts = pts[pts[,1] >= bounds[1] &
            pts[,1] <= bounds[3] &
            pts[,2] >= bounds[2] &
            pts[,2] <= bounds[4],]

  # Determine pixel locations
  x  = round(((pts[,1] - bounds[1]) / px_size) + 1)
  y  = round(((pts[,2] - bounds[2]) / px_size) + 1)

  # Determine image tab
  if(is.null(v)){
    img_tb = tab(x, y)
    } else {
    img_tb = data.frame(x,y,v)
    }

  # Map pixels into matrix of zeros
  img_mat = matrix(0, ncol=length(xs), nrow=length(ys))
  img_mat[as.matrix(img_tb[,2:1]) + ceiling(smooth_radius * 2)] = img_tb[,3]

  # Store raw image, pixel locations and
  raw_img = c(t(img_mat))
  xys     = expand.grid(1:length(xs), 1:length(ys))

  smooth_img = raw_img
  if (smooth_radius > 0) {
    if(verbose == TRUE) cat('smooth image','\n')

    smooth_img = gaussBlur(
      smooth_img, smooth_img,
      max(xs), max(ys),
      smooth_radius
      )
    }

  # create image object
  img = data.frame(xys, smooth_img)
  names(img) = c('x','y','img')

  img$img = group(img$img, n_shades[1])

  if (length(dimensions) == 2) {
    img$col = colormixer(colors[1], colors[2], img$img, format='hex')
    }

}


