#include "ExpInvSampler.h"
#include <cmath>

ExpInvSampler::ExpInvSampler(double lambda){
	U_ = UniformSampler();
	lambda_ = lambda;
}

double ExpInvSampler::getnumber(){
	double ret = U_.getnumber();
	ret = - log(1-ret) / lambda_;
	return ret;
}
