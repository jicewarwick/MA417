#include "MonteCarloSimulation.h"

MonteCarloSimulation::MonteCarloSimulation (double (*f) (double), Sampler* randgen, int n){
	f_ = f;
	randgen_ = randgen;
	n_ = n;
}
MonteCarloSimulation::~MonteCarloSimulation(){}

double MonteCarloSimulation::simulate(void){
	double ret = 0;
	double sum = 0;
	std::vector<double> v;
	v = randgen_->getnumbers(n_);

	for (int i = 0; i < n_; ++i) {
		sum += f_(v[i]);
	}
	ret = sum / (double)n_;

	return ret;
}
