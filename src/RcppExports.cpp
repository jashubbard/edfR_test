// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// findInterval2
IntegerVector findInterval2(NumericVector x, NumericVector breaks);
RcppExport SEXP edfR_findInterval2(SEXP xSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type breaks(breaksSEXP);
    __result = Rcpp::wrap(findInterval2(x, breaks));
    return __result;
END_RCPP
}
// findRealBlinks
DataFrame findRealBlinks(NumericVector starttimes, NumericVector endtimes, NumericVector types);
RcppExport SEXP edfR_findRealBlinks(SEXP starttimesSEXP, SEXP endtimesSEXP, SEXP typesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type starttimes(starttimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type endtimes(endtimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type types(typesSEXP);
    __result = Rcpp::wrap(findRealBlinks(starttimes, endtimes, types));
    return __result;
END_RCPP
}
// events2samples
arma::mat events2samples(NumericVector starttimes, NumericVector endtimes, NumericVector vals);
RcppExport SEXP edfR_events2samples(SEXP starttimesSEXP, SEXP endtimesSEXP, SEXP valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type starttimes(starttimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type endtimes(endtimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vals(valsSEXP);
    __result = Rcpp::wrap(events2samples(starttimes, endtimes, vals));
    return __result;
END_RCPP
}
