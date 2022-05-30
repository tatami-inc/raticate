// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// parse
SEXP parse(Rcpp::RObject seed);
RcppExport SEXP _raticate_tests_parse(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(parse(seed));
    return rcpp_result_gen;
END_RCPP
}
// nrow
int nrow(Rcpp::RObject parsed);
RcppExport SEXP _raticate_tests_nrow(SEXP parsedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type parsed(parsedSEXP);
    rcpp_result_gen = Rcpp::wrap(nrow(parsed));
    return rcpp_result_gen;
END_RCPP
}
// ncol
int ncol(Rcpp::RObject parsed);
RcppExport SEXP _raticate_tests_ncol(SEXP parsedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type parsed(parsedSEXP);
    rcpp_result_gen = Rcpp::wrap(ncol(parsed));
    return rcpp_result_gen;
END_RCPP
}
// row
Rcpp::NumericVector row(Rcpp::RObject parsed, int i);
RcppExport SEXP _raticate_tests_row(SEXP parsedSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type parsed(parsedSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(row(parsed, i));
    return rcpp_result_gen;
END_RCPP
}
// column
Rcpp::NumericVector column(Rcpp::RObject parsed, int i);
RcppExport SEXP _raticate_tests_column(SEXP parsedSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type parsed(parsedSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(column(parsed, i));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_raticate_tests_parse", (DL_FUNC) &_raticate_tests_parse, 1},
    {"_raticate_tests_nrow", (DL_FUNC) &_raticate_tests_nrow, 1},
    {"_raticate_tests_ncol", (DL_FUNC) &_raticate_tests_ncol, 1},
    {"_raticate_tests_row", (DL_FUNC) &_raticate_tests_row, 2},
    {"_raticate_tests_column", (DL_FUNC) &_raticate_tests_column, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_raticate_tests(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
