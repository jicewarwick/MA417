#include "MonteCarloSimulation.h"
#include "unistd.h"


MonteCarloSimulation::MonteCarloSimulation (double (*f) (double), Sampler* randgen, int n){
	f_ = f;
	randgen_ = randgen;
	n_ = n;
}
MonteCarloSimulation::~MonteCarloSimulation(){}

double MonteCarloSimulation::simulate(void){
	double ret = 0;
	double sum = 0;
	int i;

	for (i = 0; i < n_; ++i) {
		sum += f_(randgen_->getnumber());
		//usleep(100);
	}

	ret = sum / (double)n_;

	return ret;
}
