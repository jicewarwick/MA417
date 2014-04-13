#ifndef CONTROLVARIATES_H_NN1EAMAJ
#define CONTROLVARIATES_H_NN1EAMAJ

#include "Sampler.h"

class ControlVariates {
public:
	ControlVariates (Sampler *X, double (*f) (double), int n);
	ControlVariates (Sampler *X, double (*f) (double), int n, double EX);
	virtual ~ControlVariates (){}
	void setEX(double EX){EX_ = EX;}
	double getB() const {return b_;}
	double getCotrolVariatesEstimator();

private:
	Sampler *X_;
	double (*f_) (double);
	int n_;
	bool know_mean_X_;
	double EX_;
	double b_;
};


#endif /* end of include guard: CONTROLVARIATES_H_NN1EAMAJ */

