#ifndef STATISTCS_H_DUBGUCKC
#define STATISTCS_H_DUBGUCKC

#include <vector>

double mean(double* X, int n);
double covariance(double* X, double* Y, int n);
double variance(double* X, int n);

double mean(std::vector<double> X);
double covariance(std::vector<double> X, std::vector<double> Y);
double variance(std::vector<double> X);

#endif /* end of include guard: STATISTCS_H_DUBGUCKC */

