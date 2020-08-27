// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fmusum
arma::vec fmusum(const arma::vec& mu, const arma::mat& index, const arma::mat& indexgr, const int& M, const int& N);
RcppExport SEXP _CDatanet_fmusum(SEXP muSEXP, SEXP indexSEXP, SEXP indexgrSEXP, SEXP MSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type indexgr(indexgrSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int& >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(fmusum(mu, index, indexgr, M, N));
    return rcpp_result_gen;
END_RCPP
}
// updategparms1
List updategparms1(const arma::vec A, const arma::mat& dX, const arma::vec& beta0, const arma::vec& mu0, const arma::vec& sigmau20, const arma::vec& uu0, arma::vec& jsbeta, arma::vec& jsmu, const arma::mat& index, const arma::mat& indexgr, const arma::mat& indexsigma, const arma::uvec& possigma, const int& N, const int& M, const int& K, const int& Msigma, arma::vec& nvec, const int& iteration1, const int& iteration2, const double tbeta, const double tmu);
RcppExport SEXP _CDatanet_updategparms1(SEXP ASEXP, SEXP dXSEXP, SEXP beta0SEXP, SEXP mu0SEXP, SEXP sigmau20SEXP, SEXP uu0SEXP, SEXP jsbetaSEXP, SEXP jsmuSEXP, SEXP indexSEXP, SEXP indexgrSEXP, SEXP indexsigmaSEXP, SEXP possigmaSEXP, SEXP NSEXP, SEXP MSEXP, SEXP KSEXP, SEXP MsigmaSEXP, SEXP nvecSEXP, SEXP iteration1SEXP, SEXP iteration2SEXP, SEXP tbetaSEXP, SEXP tmuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dX(dXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigmau20(sigmau20SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type uu0(uu0SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type jsbeta(jsbetaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type jsmu(jsmuSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type indexgr(indexgrSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type indexsigma(indexsigmaSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type possigma(possigmaSEXP);
    Rcpp::traits::input_parameter< const int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type Msigma(MsigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type nvec(nvecSEXP);
    Rcpp::traits::input_parameter< const int& >::type iteration1(iteration1SEXP);
    Rcpp::traits::input_parameter< const int& >::type iteration2(iteration2SEXP);
    Rcpp::traits::input_parameter< const double >::type tbeta(tbetaSEXP);
    Rcpp::traits::input_parameter< const double >::type tmu(tmuSEXP);
    rcpp_result_gen = Rcpp::wrap(updategparms1(A, dX, beta0, mu0, sigmau20, uu0, jsbeta, jsmu, index, indexgr, indexsigma, possigma, N, M, K, Msigma, nvec, iteration1, iteration2, tbeta, tmu));
    return rcpp_result_gen;
END_RCPP
}
// updategparms2
List updategparms2(const arma::vec A, const arma::mat& dX, const arma::vec& beta0, const arma::vec& mu0, const arma::vec& sigmau20, const arma::vec& uu0, arma::vec& jsbeta, arma::vec& jsmu, const arma::mat& index, const arma::mat& indexgr, const arma::mat& indexsigma, const arma::uvec& possigma, const int& N, const int& M, const int& K, const int& Msigma, arma::vec& nvec, const int& iteration1, const int& iteration2, const double tbeta, const double tmu);
RcppExport SEXP _CDatanet_updategparms2(SEXP ASEXP, SEXP dXSEXP, SEXP beta0SEXP, SEXP mu0SEXP, SEXP sigmau20SEXP, SEXP uu0SEXP, SEXP jsbetaSEXP, SEXP jsmuSEXP, SEXP indexSEXP, SEXP indexgrSEXP, SEXP indexsigmaSEXP, SEXP possigmaSEXP, SEXP NSEXP, SEXP MSEXP, SEXP KSEXP, SEXP MsigmaSEXP, SEXP nvecSEXP, SEXP iteration1SEXP, SEXP iteration2SEXP, SEXP tbetaSEXP, SEXP tmuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dX(dXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigmau20(sigmau20SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type uu0(uu0SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type jsbeta(jsbetaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type jsmu(jsmuSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type indexgr(indexgrSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type indexsigma(indexsigmaSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type possigma(possigmaSEXP);
    Rcpp::traits::input_parameter< const int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type Msigma(MsigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type nvec(nvecSEXP);
    Rcpp::traits::input_parameter< const int& >::type iteration1(iteration1SEXP);
    Rcpp::traits::input_parameter< const int& >::type iteration2(iteration2SEXP);
    Rcpp::traits::input_parameter< const double >::type tbeta(tbetaSEXP);
    Rcpp::traits::input_parameter< const double >::type tmu(tmuSEXP);
    rcpp_result_gen = Rcpp::wrap(updategparms2(A, dX, beta0, mu0, sigmau20, uu0, jsbeta, jsmu, index, indexgr, indexsigma, possigma, N, M, K, Msigma, nvec, iteration1, iteration2, tbeta, tmu));
    return rcpp_result_gen;
END_RCPP
}
// fL
arma::vec fL(const arma::vec& um, const double& lambda, const double& sigma, const arma::vec& psim, const arma::mat& Gm, const int& nm);
RcppExport SEXP _CDatanet_fL(SEXP umSEXP, SEXP lambdaSEXP, SEXP sigmaSEXP, SEXP psimSEXP, SEXP GmSEXP, SEXP nmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type um(umSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type psim(psimSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Gm(GmSEXP);
    Rcpp::traits::input_parameter< const int& >::type nm(nmSEXP);
    rcpp_result_gen = Rcpp::wrap(fL(um, lambda, sigma, psim, Gm, nm));
    return rcpp_result_gen;
END_RCPP
}
// fyb
arma::vec fyb(arma::vec& yb, arma::vec& Gyb, List& G, const arma::mat& igroup, const int& ngroup, const arma::vec& psi, const double& lambda, const double& sigma, const int& n, const double& tol, const int& maxit);
RcppExport SEXP _CDatanet_fyb(SEXP ybSEXP, SEXP GybSEXP, SEXP GSEXP, SEXP igroupSEXP, SEXP ngroupSEXP, SEXP psiSEXP, SEXP lambdaSEXP, SEXP sigmaSEXP, SEXP nSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type yb(ybSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Gyb(GybSEXP);
    Rcpp::traits::input_parameter< List& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type igroup(igroupSEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(fyb(yb, Gyb, G, igroup, ngroup, psi, lambda, sigma, n, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// foptimREM
double foptimREM(arma::vec& yb, arma::vec& Gyb, const arma::vec& theta, const arma::mat& X, List& G, const arma::mat& igroup, const int& ngroup, const arma::vec& h1, const int& K, const int& n, const arma::vec& y, const double& tol, const int& maxit);
RcppExport SEXP _CDatanet_foptimREM(SEXP ybSEXP, SEXP GybSEXP, SEXP thetaSEXP, SEXP XSEXP, SEXP GSEXP, SEXP igroupSEXP, SEXP ngroupSEXP, SEXP h1SEXP, SEXP KSEXP, SEXP nSEXP, SEXP ySEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type yb(ybSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Gyb(GybSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< List& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type igroup(igroupSEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(foptimREM(yb, Gyb, theta, X, G, igroup, ngroup, h1, K, n, y, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// foptimREM_NPL
double foptimREM_NPL(arma::vec& yb, arma::vec& Gyb, const arma::vec& theta, const arma::mat& X, List& G, const arma::mat& igroup, const int& ngroup, const arma::vec& h1, const int& K, const int& n, const arma::vec& y);
RcppExport SEXP _CDatanet_foptimREM_NPL(SEXP ybSEXP, SEXP GybSEXP, SEXP thetaSEXP, SEXP XSEXP, SEXP GSEXP, SEXP igroupSEXP, SEXP ngroupSEXP, SEXP h1SEXP, SEXP KSEXP, SEXP nSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type yb(ybSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Gyb(GybSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< List& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type igroup(igroupSEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(foptimREM_NPL(yb, Gyb, theta, X, G, igroup, ngroup, h1, K, n, y));
    return rcpp_result_gen;
END_RCPP
}
// fL_NPL
void fL_NPL(arma::vec& u, arma::vec& Gu, List& G, const arma::mat& igroup, const int& ngroup, const arma::mat& X, const arma::vec& theta, const int& K, const int& n);
RcppExport SEXP _CDatanet_fL_NPL(SEXP uSEXP, SEXP GuSEXP, SEXP GSEXP, SEXP igroupSEXP, SEXP ngroupSEXP, SEXP XSEXP, SEXP thetaSEXP, SEXP KSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Gu(GuSEXP);
    Rcpp::traits::input_parameter< List& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type igroup(igroupSEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    fL_NPL(u, Gu, G, igroup, ngroup, X, theta, K, n);
    return R_NilValue;
END_RCPP
}
// foptimTobit
double foptimTobit(const arma::vec& theta, const arma::mat& X, arma::vec& logdetA2, arma::vec& alphatilde, List& G2, List& I2, const int& K, const arma::vec& y, const arma::vec& Gy, const arma::uvec& idpos, const arma::uvec& idzero, const arma::vec& Npos, const int& ngroup);
RcppExport SEXP _CDatanet_foptimTobit(SEXP thetaSEXP, SEXP XSEXP, SEXP logdetA2SEXP, SEXP alphatildeSEXP, SEXP G2SEXP, SEXP I2SEXP, SEXP KSEXP, SEXP ySEXP, SEXP GySEXP, SEXP idposSEXP, SEXP idzeroSEXP, SEXP NposSEXP, SEXP ngroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type logdetA2(logdetA2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type alphatilde(alphatildeSEXP);
    Rcpp::traits::input_parameter< List& >::type G2(G2SEXP);
    Rcpp::traits::input_parameter< List& >::type I2(I2SEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Gy(GySEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type idpos(idposSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type idzero(idzeroSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Npos(NposSEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    rcpp_result_gen = Rcpp::wrap(foptimTobit(theta, X, logdetA2, alphatilde, G2, I2, K, y, Gy, idpos, idzero, Npos, ngroup));
    return rcpp_result_gen;
END_RCPP
}
// foptimTobit0
double foptimTobit0(const arma::vec& theta, const arma::mat& X, arma::vec& logdetA2, arma::vec& alphatilde, List& G2, List& I2, const int& K, const arma::vec& y, const arma::vec& Gy, const arma::uvec& idpos, const arma::uvec& idzero, const arma::vec& Npos, const int& ngroup);
RcppExport SEXP _CDatanet_foptimTobit0(SEXP thetaSEXP, SEXP XSEXP, SEXP logdetA2SEXP, SEXP alphatildeSEXP, SEXP G2SEXP, SEXP I2SEXP, SEXP KSEXP, SEXP ySEXP, SEXP GySEXP, SEXP idposSEXP, SEXP idzeroSEXP, SEXP NposSEXP, SEXP ngroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type logdetA2(logdetA2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type alphatilde(alphatildeSEXP);
    Rcpp::traits::input_parameter< List& >::type G2(G2SEXP);
    Rcpp::traits::input_parameter< List& >::type I2(I2SEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Gy(GySEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type idpos(idposSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type idzero(idzeroSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Npos(NposSEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    rcpp_result_gen = Rcpp::wrap(foptimTobit0(theta, X, logdetA2, alphatilde, G2, I2, K, y, Gy, idpos, idzero, Npos, ngroup));
    return rcpp_result_gen;
END_RCPP
}
// fgradvecTobit
arma::mat fgradvecTobit(const arma::vec& theta, const arma::mat& X, List& G2, List& I, List& W, const int& K, const int& N, const arma::vec& y, const arma::vec& Gy, const arma::vec& indzero, const arma::vec& indpos, const arma::mat igroup, const int& ngroup);
RcppExport SEXP _CDatanet_fgradvecTobit(SEXP thetaSEXP, SEXP XSEXP, SEXP G2SEXP, SEXP ISEXP, SEXP WSEXP, SEXP KSEXP, SEXP NSEXP, SEXP ySEXP, SEXP GySEXP, SEXP indzeroSEXP, SEXP indposSEXP, SEXP igroupSEXP, SEXP ngroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< List& >::type G2(G2SEXP);
    Rcpp::traits::input_parameter< List& >::type I(ISEXP);
    Rcpp::traits::input_parameter< List& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Gy(GySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type indzero(indzeroSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type indpos(indposSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type igroup(igroupSEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    rcpp_result_gen = Rcpp::wrap(fgradvecTobit(theta, X, G2, I, W, K, N, y, Gy, indzero, indpos, igroup, ngroup));
    return rcpp_result_gen;
END_RCPP
}
// foptimSAR
double foptimSAR(const double& alphatilde, const arma::mat& X, const arma::mat& invXX, List& G, List& I, const int& N, const arma::vec& y, const arma::vec& Gy, const int& ngroup);
RcppExport SEXP _CDatanet_foptimSAR(SEXP alphatildeSEXP, SEXP XSEXP, SEXP invXXSEXP, SEXP GSEXP, SEXP ISEXP, SEXP NSEXP, SEXP ySEXP, SEXP GySEXP, SEXP ngroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type alphatilde(alphatildeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type invXX(invXXSEXP);
    Rcpp::traits::input_parameter< List& >::type G(GSEXP);
    Rcpp::traits::input_parameter< List& >::type I(ISEXP);
    Rcpp::traits::input_parameter< const int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Gy(GySEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    rcpp_result_gen = Rcpp::wrap(foptimSAR(alphatilde, X, invXX, G, I, N, y, Gy, ngroup));
    return rcpp_result_gen;
END_RCPP
}
// foptimSAR0
double foptimSAR0(const double& alphatilde, const arma::mat& X, const arma::mat& invXX, List& G, List& I, const int& N, const arma::vec& y, const arma::vec& Gy, const int& ngroup);
RcppExport SEXP _CDatanet_foptimSAR0(SEXP alphatildeSEXP, SEXP XSEXP, SEXP invXXSEXP, SEXP GSEXP, SEXP ISEXP, SEXP NSEXP, SEXP ySEXP, SEXP GySEXP, SEXP ngroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type alphatilde(alphatildeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type invXX(invXXSEXP);
    Rcpp::traits::input_parameter< List& >::type G(GSEXP);
    Rcpp::traits::input_parameter< List& >::type I(ISEXP);
    Rcpp::traits::input_parameter< const int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Gy(GySEXP);
    Rcpp::traits::input_parameter< const int& >::type ngroup(ngroupSEXP);
    rcpp_result_gen = Rcpp::wrap(foptimSAR0(alphatilde, X, invXX, G, I, N, y, Gy, ngroup));
    return rcpp_result_gen;
END_RCPP
}
// cABC
List cABC(const int& n, const arma::mat& miq, const double& sigma, const int& R, const int& S, const arma::vec& tu, const arma::vec& tutu, const arma::mat& cpdf, const arma::mat& ccdf);
RcppExport SEXP _CDatanet_cABC(SEXP nSEXP, SEXP miqSEXP, SEXP sigmaSEXP, SEXP RSEXP, SEXP SSEXP, SEXP tuSEXP, SEXP tutuSEXP, SEXP cpdfSEXP, SEXP ccdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type miq(miqSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const int& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tu(tuSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tutu(tutuSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type cpdf(cpdfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type ccdf(ccdfSEXP);
    rcpp_result_gen = Rcpp::wrap(cABC(n, miq, sigma, R, S, tu, tutu, cpdf, ccdf));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CDatanet_fmusum", (DL_FUNC) &_CDatanet_fmusum, 5},
    {"_CDatanet_updategparms1", (DL_FUNC) &_CDatanet_updategparms1, 21},
    {"_CDatanet_updategparms2", (DL_FUNC) &_CDatanet_updategparms2, 21},
    {"_CDatanet_fL", (DL_FUNC) &_CDatanet_fL, 6},
    {"_CDatanet_fyb", (DL_FUNC) &_CDatanet_fyb, 11},
    {"_CDatanet_foptimREM", (DL_FUNC) &_CDatanet_foptimREM, 13},
    {"_CDatanet_foptimREM_NPL", (DL_FUNC) &_CDatanet_foptimREM_NPL, 11},
    {"_CDatanet_fL_NPL", (DL_FUNC) &_CDatanet_fL_NPL, 9},
    {"_CDatanet_foptimTobit", (DL_FUNC) &_CDatanet_foptimTobit, 13},
    {"_CDatanet_foptimTobit0", (DL_FUNC) &_CDatanet_foptimTobit0, 13},
    {"_CDatanet_fgradvecTobit", (DL_FUNC) &_CDatanet_fgradvecTobit, 13},
    {"_CDatanet_foptimSAR", (DL_FUNC) &_CDatanet_foptimSAR, 9},
    {"_CDatanet_foptimSAR0", (DL_FUNC) &_CDatanet_foptimSAR0, 9},
    {"_CDatanet_cABC", (DL_FUNC) &_CDatanet_cABC, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_CDatanet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
