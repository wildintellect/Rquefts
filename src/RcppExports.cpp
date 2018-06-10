// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// quefts
NumericVector quefts(List soil, List crop, List fertilizer);
RcppExport SEXP _Rquefts_quefts(SEXP soilSEXP, SEXP cropSEXP, SEXP fertilizerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type soil(soilSEXP);
    Rcpp::traits::input_parameter< List >::type crop(cropSEXP);
    Rcpp::traits::input_parameter< List >::type fertilizer(fertilizerSEXP);
    rcpp_result_gen = Rcpp::wrap(quefts(soil, crop, fertilizer));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_QUEFTS();

static const R_CallMethodDef CallEntries[] = {
    {"_Rquefts_quefts", (DL_FUNC) &_Rquefts_quefts, 3},
    {"_rcpp_module_boot_QUEFTS", (DL_FUNC) &_rcpp_module_boot_QUEFTS, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rquefts(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
