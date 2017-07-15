# round even
round_even = function(x){
  rx = round(x)
  test = rx %% 2
  ifelse(test == 0,rx,
         ifelse( x < 0,
                 ifelse(x <  rx,floor(x),ceiling(x)),
                 ifelse(x >= rx,ceiling(x),floor(x))))
}

