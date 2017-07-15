#include <Rcpp.h>
using namespace Rcpp;



double r_nn(double ele, std::vector<double> set, std::vector<double> rep) {
  std::vector<double>::iterator it;
  it = std::find(set.begin(), set.end(), ele);
  int i = std::distance(set.begin(), it);
  if(i == rep.size()) return NA_REAL;
  return rep[i];
  }


std::string r_nc(double ele, std::vector<double> set, std::vector<std::string> rep) {
  std::vector<double>::iterator it;
  it = std::find(set.begin(), set.end(), ele);
  int i = std::distance(set.begin(), it);
  if(i == rep.size()) return "NA";
  return rep[i];
}

double r_cn(std::string ele, std::vector<std::string> set, std::vector<double> rep) {
  std::vector<std::string>::iterator it;
  it = std::find(set.begin(), set.end(), ele);
  int i = std::distance(set.begin(), it);
  if(i == rep.size()) return NA_REAL;
  return rep[i];
}

std::string r_cc(std::string ele, std::vector<std::string> set, std::vector<std::string> rep) {
  std::vector<std::string>::iterator it;
  it = std::find(set.begin(), set.end(), ele);
  int i = std::distance(set.begin(), it);
  if(i == rep.size()) return "NA";
  return rep[i];
}

//' Replace numeric-numeric
//'
//' Replace numeric values by other numeric values.
//'
//' Function iterates through \code{elems} and identifies a replacement in \code{rep} by
//' matching the elements to \code{set}
//'
//' @param elems numeric vector of to be replaced elements
//' @param set numeric vector containing the unique set of elems
//' @param rep numeric vector of same length as set containing the replacement values
//'
//' @return numeric vector of same length as \code{elems} containing the replacement values
//'
//' @export
// [[Rcpp::export]]
std::vector<double> replace_nn(std::vector<double> elems, std::vector<double> set, std::vector<double> rep) {
  int n = elems.size();
  std::vector<double> reps(n);
  for(int i = 0; i < n; ++i){
    reps[i] = r_nn(elems[i],set,rep);
    }
  return reps;
  }

//' Replace numeric-character
//'
//' Replace numeric values by character values.
//'
//' Function iterates through \code{elems} and identifies a replacement in \code{rep} by
//' matching the elements to \code{set}
//'
//' @param elems numeric vector of to be replaced elements
//' @param set numeric vector containing the unique set of elems
//' @param rep character vector of same length as set containing the replacement values
//'
//' @return character vector of same length as \code{elems} containing the replacement values
//'
//' @export
// [[Rcpp::export]]
std::vector<std::string> replace_nc(std::vector<double> elems, std::vector<double> set, std::vector<std::string> rep) {
  int n = elems.size();
  std::vector<std::string> reps(n);
  for(int i = 0; i < n; ++i){
    reps[i] = r_nc(elems[i],set,rep);
  }
  return reps;
}

//' Replace character-numeric
//'
//' Replace character values by numeric values.
//'
//' Function iterates through \code{elems} and identifies a replacement in \code{rep} by
//' matching the elements to \code{set}
//'
//' @param elems character vector of to be replaced elements
//' @param set character vector containing the unique set of elems
//' @param rep numeric vector of same length as set containing the replacement values
//'
//' @return character vector of same length as \code{elems} containing the replacement values
//'
//' @export
// [[Rcpp::export]]
std::vector<double> replace_cn(std::vector<std::string> elems, std::vector<std::string> set, std::vector<double> rep) {
  int n = elems.size();
  std::vector<double> reps(n);
  for(int i = 0; i < n; ++i){
    reps[i] = r_cn(elems[i],set,rep);
  }
  return reps;
}

//' Replace character-character
//'
//' Replace character values by other character values.
//'
//' Function iterates through \code{elems} and identifies a replacement in \code{rep} by
//' matching the elements to \code{set}
//'
//' @param elems character vector of to be replaced elements
//' @param set character vector containing the unique set of elems
//' @param rep character vector of same length as set containing the replacement values
//'
//' @return character vector of same length as \code{elems} containing the replacement values
//'
//' @export
// [[Rcpp::export]]
std::vector<std::string> replace_cc(std::vector<std::string> elems, std::vector<std::string> set, std::vector<std::string> rep) {
  int n = elems.size();
  std::vector<std::string> reps(n);
  for(int i = 0; i < n; ++i){
    reps[i] = r_cc(elems[i],set,rep);
  }
  return reps;
}
