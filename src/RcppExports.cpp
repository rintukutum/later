// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// saveNframesCallback
void saveNframesCallback(SEXP exp);
RcppExport SEXP later_saveNframesCallback(SEXP expSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type exp(expSEXP);
    saveNframesCallback(exp);
    return R_NilValue;
END_RCPP
}
// execLater
void execLater(Rcpp::Function callback);
RcppExport SEXP later_execLater(SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type callback(callbackSEXP);
    execLater(callback);
    return R_NilValue;
END_RCPP
}