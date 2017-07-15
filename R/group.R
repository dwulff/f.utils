#' Group values
#'
#' Bin values in n groups.
#'
#' @param x numeric vector that is to be splitted-up in groups
#' @param n number of groups
#' @param type character string - either \code{mid} or \code{extreme} -
#'   specifying which values should be returned. \code{mid} returns for each
#'   group the value in the middle of the group's range of values, whereas
#'   \{extreme} returns the extreme values (preserving the full range).
#'   See examples.
#'
#' @examples
#'  # return mid points
#'  group(c(1,2,3,4,5),3,'mid')
#'
#'  # return extreme points
#'  group(c(1,2,3,4,5),3,'extreme')
#'
#' @return vector matching length of \code{x} binned into \code{n} groups.
#'
#' @export
group = function(x,n,type = 'extreme'){
  minx = min(x)
  maxx = max(x)
  x = (x - minx) / (.0000001 + (maxx - minx))
  if(type == 'extreme') x = round((x * n) - .5) / (n - 1)
  if(type == 'mid') x = round((x * n) - .5) / n + (1/(2*n))
  x = x * (maxx - minx)
  x = x + minx
  return(x)
  }






