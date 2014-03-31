#include "UniformSampler.h"
#include <cstdlib>
#include <ctime>

double gen_ran(void);

UniformSampler::UniformSampler(){
	srand((unsigned)time(0));
}

UniformSampler::~UniformSampler(){}

double UniformSampler::getnumber(void){
	double ret = gen_ran();
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
	ret = (gen_ran() * (top - bottom)) + bottom;
	return ret;
}

double gen_ran(void){
	double ret = rand() / static_cast<double>(RAND_MAX);
	return ret;
}

