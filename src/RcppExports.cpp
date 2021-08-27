// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getW
NumericVector getW(double dx, const int M);
RcppExport SEXP _rpact_getW(SEXP dxSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< const int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(getW(dx, M));
    return rcpp_result_gen;
END_RCPP
}
// getGroupSequentialProbabilitiesCpp
NumericMatrix getGroupSequentialProbabilitiesCpp(NumericMatrix decisionMatrix, NumericVector informationRates);
RcppExport SEXP _rpact_getGroupSequentialProbabilitiesCpp(SEXP decisionMatrixSEXP, SEXP informationRatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type decisionMatrix(decisionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type informationRates(informationRatesSEXP);
    rcpp_result_gen = Rcpp::wrap(getGroupSequentialProbabilitiesCpp(decisionMatrix, informationRates));
    return rcpp_result_gen;
END_RCPP
}
// getDesignGroupSequentialPampallonaTsiatisCpp
List getDesignGroupSequentialPampallonaTsiatisCpp(double tolerance, double beta, double alpha, double kMax, double deltaPT0, double deltaPT1, NumericVector informationRates, int sided, bool bindingFutility);
RcppExport SEXP _rpact_getDesignGroupSequentialPampallonaTsiatisCpp(SEXP toleranceSEXP, SEXP betaSEXP, SEXP alphaSEXP, SEXP kMaxSEXP, SEXP deltaPT0SEXP, SEXP deltaPT1SEXP, SEXP informationRatesSEXP, SEXP sidedSEXP, SEXP bindingFutilitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type kMax(kMaxSEXP);
    Rcpp::traits::input_parameter< double >::type deltaPT0(deltaPT0SEXP);
    Rcpp::traits::input_parameter< double >::type deltaPT1(deltaPT1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type informationRates(informationRatesSEXP);
    Rcpp::traits::input_parameter< int >::type sided(sidedSEXP);
    Rcpp::traits::input_parameter< bool >::type bindingFutility(bindingFutilitySEXP);
    rcpp_result_gen = Rcpp::wrap(getDesignGroupSequentialPampallonaTsiatisCpp(tolerance, beta, alpha, kMax, deltaPT0, deltaPT1, informationRates, sided, bindingFutility));
    return rcpp_result_gen;
END_RCPP
}
// getRandomSurvivalDistribution
double getRandomSurvivalDistribution(double rate, double kappa);
RcppExport SEXP _rpact_getRandomSurvivalDistribution(SEXP rateSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(getRandomSurvivalDistribution(rate, kappa));
    return rcpp_result_gen;
END_RCPP
}
// getRandomPiecewiseExponentialDistribution
double getRandomPiecewiseExponentialDistribution(NumericVector cdfValues, NumericVector piecewiseLambda, NumericVector piecewiseSurvivalTime);
RcppExport SEXP _rpact_getRandomPiecewiseExponentialDistribution(SEXP cdfValuesSEXP, SEXP piecewiseLambdaSEXP, SEXP piecewiseSurvivalTimeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cdfValues(cdfValuesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type piecewiseLambda(piecewiseLambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type piecewiseSurvivalTime(piecewiseSurvivalTimeSEXP);
    rcpp_result_gen = Rcpp::wrap(getRandomPiecewiseExponentialDistribution(cdfValues, piecewiseLambda, piecewiseSurvivalTime));
    return rcpp_result_gen;
END_RCPP
}
// getSimulationSurvivalCpp
List getSimulationSurvivalCpp(int designNumber, int kMax, int sided, NumericVector criticalValues, NumericVector informationRates, double conditionalPower, NumericVector plannedEvents, double thetaH1, NumericVector minNumberOfEventsPerStage, NumericVector maxNumberOfEventsPerStage, bool directionUpper, double allocation1, double allocation2, NumericVector accrualTime, IntegerVector treatmentGroup, double thetaH0, NumericVector futilityBounds, NumericVector alpha0Vec, NumericVector pi1Vec, double pi2, double eventTime, NumericVector piecewiseSurvivalTime, NumericVector cdfValues1, NumericVector cdfValues2, NumericVector lambdaVec1, NumericVector lambdaVec2, NumericVector phi, int maxNumberOfSubjects, int maxNumberOfIterations, int maxNumberOfRawDatasetsPerStage, double kappa);
RcppExport SEXP _rpact_getSimulationSurvivalCpp(SEXP designNumberSEXP, SEXP kMaxSEXP, SEXP sidedSEXP, SEXP criticalValuesSEXP, SEXP informationRatesSEXP, SEXP conditionalPowerSEXP, SEXP plannedEventsSEXP, SEXP thetaH1SEXP, SEXP minNumberOfEventsPerStageSEXP, SEXP maxNumberOfEventsPerStageSEXP, SEXP directionUpperSEXP, SEXP allocation1SEXP, SEXP allocation2SEXP, SEXP accrualTimeSEXP, SEXP treatmentGroupSEXP, SEXP thetaH0SEXP, SEXP futilityBoundsSEXP, SEXP alpha0VecSEXP, SEXP pi1VecSEXP, SEXP pi2SEXP, SEXP eventTimeSEXP, SEXP piecewiseSurvivalTimeSEXP, SEXP cdfValues1SEXP, SEXP cdfValues2SEXP, SEXP lambdaVec1SEXP, SEXP lambdaVec2SEXP, SEXP phiSEXP, SEXP maxNumberOfSubjectsSEXP, SEXP maxNumberOfIterationsSEXP, SEXP maxNumberOfRawDatasetsPerStageSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type designNumber(designNumberSEXP);
    Rcpp::traits::input_parameter< int >::type kMax(kMaxSEXP);
    Rcpp::traits::input_parameter< int >::type sided(sidedSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type criticalValues(criticalValuesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type informationRates(informationRatesSEXP);
    Rcpp::traits::input_parameter< double >::type conditionalPower(conditionalPowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type plannedEvents(plannedEventsSEXP);
    Rcpp::traits::input_parameter< double >::type thetaH1(thetaH1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type minNumberOfEventsPerStage(minNumberOfEventsPerStageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type maxNumberOfEventsPerStage(maxNumberOfEventsPerStageSEXP);
    Rcpp::traits::input_parameter< bool >::type directionUpper(directionUpperSEXP);
    Rcpp::traits::input_parameter< double >::type allocation1(allocation1SEXP);
    Rcpp::traits::input_parameter< double >::type allocation2(allocation2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type accrualTime(accrualTimeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type treatmentGroup(treatmentGroupSEXP);
    Rcpp::traits::input_parameter< double >::type thetaH0(thetaH0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type futilityBounds(futilityBoundsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha0Vec(alpha0VecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi1Vec(pi1VecSEXP);
    Rcpp::traits::input_parameter< double >::type pi2(pi2SEXP);
    Rcpp::traits::input_parameter< double >::type eventTime(eventTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type piecewiseSurvivalTime(piecewiseSurvivalTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdfValues1(cdfValues1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdfValues2(cdfValues2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambdaVec1(lambdaVec1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambdaVec2(lambdaVec2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< int >::type maxNumberOfSubjects(maxNumberOfSubjectsSEXP);
    Rcpp::traits::input_parameter< int >::type maxNumberOfIterations(maxNumberOfIterationsSEXP);
    Rcpp::traits::input_parameter< int >::type maxNumberOfRawDatasetsPerStage(maxNumberOfRawDatasetsPerStageSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(getSimulationSurvivalCpp(designNumber, kMax, sided, criticalValues, informationRates, conditionalPower, plannedEvents, thetaH1, minNumberOfEventsPerStage, maxNumberOfEventsPerStage, directionUpper, allocation1, allocation2, accrualTime, treatmentGroup, thetaH0, futilityBounds, alpha0Vec, pi1Vec, pi2, eventTime, piecewiseSurvivalTime, cdfValues1, cdfValues2, lambdaVec1, lambdaVec2, phi, maxNumberOfSubjects, maxNumberOfIterations, maxNumberOfRawDatasetsPerStage, kappa));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rpact_getW", (DL_FUNC) &_rpact_getW, 2},
    {"_rpact_getGroupSequentialProbabilitiesCpp", (DL_FUNC) &_rpact_getGroupSequentialProbabilitiesCpp, 2},
    {"_rpact_getDesignGroupSequentialPampallonaTsiatisCpp", (DL_FUNC) &_rpact_getDesignGroupSequentialPampallonaTsiatisCpp, 9},
    {"_rpact_getRandomSurvivalDistribution", (DL_FUNC) &_rpact_getRandomSurvivalDistribution, 2},
    {"_rpact_getRandomPiecewiseExponentialDistribution", (DL_FUNC) &_rpact_getRandomPiecewiseExponentialDistribution, 3},
    {"_rpact_getSimulationSurvivalCpp", (DL_FUNC) &_rpact_getSimulationSurvivalCpp, 31},
    {NULL, NULL, 0}
};

RcppExport void R_init_rpact(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
