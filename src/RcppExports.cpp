// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// replace_nn
std::vector<double> replace_nn(std::vector<double> elems, std::vector<double> set, std::vector<double> rep);
RcppExport SEXP f_utils_replace_nn(SEXP elemsSEXP, SEXP setSEXP, SEXP repSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type elems(elemsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type set(setSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type rep(repSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_nn(elems, set, rep));
    return rcpp_result_gen;
END_RCPP
}
// replace_nc
std::vector<std::string> replace_nc(std::vector<double> elems, std::vector<double> set, std::vector<std::string> rep);
RcppExport SEXP f_utils_replace_nc(SEXP elemsSEXP, SEXP setSEXP, SEXP repSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type elems(elemsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type set(setSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rep(repSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_nc(elems, set, rep));
    return rcpp_result_gen;
END_RCPP
}
// replace_cn
std::vector<double> replace_cn(std::vector<std::string> elems, std::vector<std::string> set, std::vector<double> rep);
RcppExport SEXP f_utils_replace_cn(SEXP elemsSEXP, SEXP setSEXP, SEXP repSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type elems(elemsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type set(setSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type rep(repSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_cn(elems, set, rep));
    return rcpp_result_gen;
END_RCPP
}
// replace_cc
std::vector<std::string> replace_cc(std::vector<std::string> elems, std::vector<std::string> set, std::vector<std::string> rep);
RcppExport SEXP f_utils_replace_cc(SEXP elemsSEXP, SEXP setSEXP, SEXP repSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type elems(elemsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type set(setSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rep(repSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_cc(elems, set, rep));
    return rcpp_result_gen;
END_RCPP
}
// count_lines
int count_lines(std::string filename);
RcppExport SEXP f_utils_count_lines(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(count_lines(filename));
    return rcpp_result_gen;
END_RCPP
}
// strsplit_c
std::vector<std::string> strsplit_c(std::string line, char delim);
RcppExport SEXP f_utils_strsplit_c(SEXP lineSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type line(lineSEXP);
    Rcpp::traits::input_parameter< char >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(strsplit_c(line, delim));
    return rcpp_result_gen;
END_RCPP
}
// readbig
CharacterMatrix readbig(std::string filename, char delim, int nlines);
RcppExport SEXP f_utils_readbig(SEXP filenameSEXP, SEXP delimSEXP, SEXP nlinesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< int >::type nlines(nlinesSEXP);
    rcpp_result_gen = Rcpp::wrap(readbig(filename, delim, nlines));
    return rcpp_result_gen;
END_RCPP
}