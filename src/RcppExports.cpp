// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lmm_maximize_cpp
DataFrame lmm_maximize_cpp(NumericVector y, NumericMatrix x, int addintercept);
RcppExport SEXP MESS_lmm_maximize_cpp(SEXP ySEXP, SEXP xSEXP, SEXP addinterceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type addintercept(addinterceptSEXP);
    __result = Rcpp::wrap(lmm_maximize_cpp(y, x, addintercept));
    return __result;
END_RCPP
}
// lmm_Maximize_cpp
List lmm_Maximize_cpp(NumericVector y, NumericMatrix x, List vc, int maxiter, bool REML, double tolerance);
RcppExport SEXP MESS_lmm_Maximize_cpp(SEXP ySEXP, SEXP xSEXP, SEXP vcSEXP, SEXP maxiterSEXP, SEXP REMLSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type vc(vcSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type REML(REMLSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    __result = Rcpp::wrap(lmm_Maximize_cpp(y, x, vc, maxiter, REML, tolerance));
    return __result;
END_RCPP
}
// mfastLm_cpp
DataFrame mfastLm_cpp(NumericVector y, NumericMatrix x, int addintercept);
RcppExport SEXP MESS_mfastLm_cpp(SEXP ySEXP, SEXP xSEXP, SEXP addinterceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type addintercept(addinterceptSEXP);
    __result = Rcpp::wrap(mfastLm_cpp(y, x, addintercept));
    return __result;
END_RCPP
}
// quadform
NumericMatrix quadform(NumericMatrix x, NumericMatrix M, bool invertM, bool transposex);
RcppExport SEXP MESS_quadform(SEXP xSEXP, SEXP MSEXP, SEXP invertMSEXP, SEXP transposexSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type invertM(invertMSEXP);
    Rcpp::traits::input_parameter< bool >::type transposex(transposexSEXP);
    __result = Rcpp::wrap(quadform(x, M, invertM, transposex));
    return __result;
END_RCPP
}
// tracemp
double tracemp(NumericMatrix A, NumericMatrix B);
RcppExport SEXP MESS_tracemp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    __result = Rcpp::wrap(tracemp(A, B));
    return __result;
END_RCPP
}
