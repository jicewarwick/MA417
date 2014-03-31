#include "ExpInvSampler.h"
#include <cmath>

ExpInvSampler::ExpInvSampler(double lambda){
	U_ = UniformSampler();
	lambda_ = lambda;
}

ExpInvSampler::~ExpInvSampler(){
	U_.~UniformSampler();
}

double ExpInvSampler::getnumber(){
	double ret = U_.getnumber();
	return ret;
}
