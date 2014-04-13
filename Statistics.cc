#include "Statistics.h"
#include <cmath>

double mean(double* X, int n){
	double ret = 0;
	for (int i = 0; i < n; ++i) {
		ret += X[i];
	}
	ret /= n;
	return ret;
}

double covariance(double* X, double* Y, int n){
	double ret = 0;
	double X_mean = mean(X, n);
	double Y_mean = mean(Y, n);
	for (int i = 0; i < n; ++i) {
		ret += (X[i] - X_mean) * (Y[i] - Y_mean);
	}
	ret /= n;
	return ret;

}

double variance(double* X, int n){
	double ret = 0;
	double X_mean = mean(X, n);
	for (int i = 0; i < n; ++i) {
		ret += pow(X[i] - X_mean, 2);
	}
	ret /= n;
	return ret;
}


double mean(std::vector<double> X){
	int n = X.size();
	double ret = 0;
	for (int i = 0; i < n; ++i) {
		ret += X[i];
	}
	ret /= n;
	return ret;
}

double covariance(std::vector<double> X, std::vector<double> Y){
	int n = X.size();
	double ret = 0;
	double X_mean = mean(X);
	double Y_mean = mean(Y);
	for (int i = 0; i < n; ++i) {
		ret += (X[i] - X_mean) * (Y[i] - Y_mean);
	}
	ret /= n;
	return ret;
}

double variance(std::vector<double> X){
	int n = X.size();
	double ret = 0;
	double X_mean = mean(X);
	for (int i = 0; i < n; ++i) {
		ret += pow(X[i] - X_mean, 2);
	}
	ret /= n;
	return ret;
}

