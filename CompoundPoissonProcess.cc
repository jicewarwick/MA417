#include "CompoundPoissonProcess.h"
#include "ExpInvSampler.h"
#include "ConstantSampler.h"
#include <algorithm>


CompoundPoissonProcess::CompoundPoissonProcess(double lambda, Sampler* Y){
	lambda_ = lambda;
	Y_ = Y;
}


double CompoundPoissonProcess::get_terminalvalue(double T, int numberofsteps, double X0){
	double ret = X0;
	double t = 0;
	ExpInvSampler Nt(lambda_);
	while (t < T){
		t += Nt.getnumber();
		ret += Y_->getnumber();
	}

	return ret;
}

void CompoundPoissonProcess::get_samplepath(double T, int numberofsteps, double X0, double *p){
	p[0] = X0;
	double sum_Y = X0;
	double t = 0;
	double interval;
	double h = T / (double) numberofsteps;
	int index = 1;
	int n;
	ExpInvSampler Nt(lambda_);
	while (t < T){
		interval = Nt.getnumber();
		n = interval / h;
		n = std::min(n, numberofsteps - index + 2);
		for (int i = 1; i < n; ++i) {
			p[index] = sum_Y;
			index ++;
		}
		t += interval;
		sum_Y += Y_->getnumber();
	}
}

