#include "UniformSampler.h"

UniformSampler::UniformSampler(){}

UniformSampler::~UniformSampler(){}

double UniformSampler::getnumber(void){
	srand((unsigned)time(0));
	double ret =rand() / static_cast<double>(RAND_MAX);
	return ret;
}

double UniformSampler::getnumber(double bottom, double top){
	// check the order of input
	if (bottom > top) {
		double tmp;
		tmp = bottom;
		bottom = top;
		top = tmp;
	}

	double ret;
	ret = (getnumber() * (top - bottom)) + bottom;
	return ret;
}
