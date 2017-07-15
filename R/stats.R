#' Cohen's d
#'
#' Computes cohens d from values of two independent groups
#'
#' @param x,y numeric vectors containing the data of two groups.
#'
#' @export
cohen = function(x,y){

  nx = length(x)
  ny = length(y)
  vx = stats::var(x)
  vy = stats::var(y)

  nom = mean(x) - mean(y)
  den = sqrt(((nx-1)*vx + (ny-1)*vy)/(nx+ny-2))
  coh = nom / den

  v_d = sqrt((nx+ny)/(nx*ny) + (coh*coh) / (2 * (nx + ny)))

  rx = vx/nx
  ry = vy/ny
  nu = (rx + ry)**2 / ((rx ** 2 / (rx - 1) + (ry ** 2 / (ry - 1))))

  return(c(coh,v_d,nu))
}

# draws from truncated normal
trnorm = function(n,m,sd,a,b){
  v = rnorm(n,m,sd)
  repeat{
    sel =  v < a | v > b
    if(all(!sel)) break
    v[sel] = rnorm(sum(sel),m,sd)
  }
  return(v)
}

