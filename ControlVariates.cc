#include "ControlVariates.h"
#include <cmath>
#include <iostream>
#include <vector>
#include "Statistics.h"

double g(double);

ControlVariates::ControlVariates(Sampler *X, double (*f) (double), int n){
	X_ = X;
	f_ = f;
	n_ = n;
	know_mean_X_ = false;
}

ControlVariates::ControlVariates (Sampler *X, double (*f) (double), int n, double EX) { 
	ControlVariates(X, f, n);	
	EX_ = EX;
	know_mean_X_ = true;
}

double ControlVariates::getCotrolVariatesEstimator(){
	double YBar;
	std::cout << "break0" << std::endl;
	std::vector<double> x = X_->getnumbers(n_);
	std::cout << "break1" << std::endl;
	std::vector<double> y;
	for (int i = 0; i < n_; ++i) {
		y[i] = f_(x[i]);
	}

	YBar = mean(y);
	if (know_mean_X_ == false) {
		EX_ = mean(x);
	}
	double VarX = variance(x);
	double Cov = covariance(x, y);
	b_ = Cov / VarX;

	double ret = 0;
	for (int i = 0; i < n_; ++i) {
		ret += y[i] - b_ * (x[i] - EX_);
	}
	ret = ret / (double)n_;

	return ret;
}
