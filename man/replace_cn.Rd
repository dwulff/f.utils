% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{replace_cn}
\alias{replace_cn}
\title{Replace character-numeric}
\usage{
replace_cn(elems, set, rep)
}
\arguments{
\item{elems}{character vector of to be replaced elements}

\item{set}{character vector containing the unique set of elems}

\item{rep}{numeric vector of same length as set containing the replacement values}
}
\value{
character vector of same length as \code{elems} containing the replacement values
}
\description{
Replace character values by numeric values.
}
\details{
Function iterates through \code{elems} and identifies a replacement in \code{rep} by
matching the elements to \code{set}
}
