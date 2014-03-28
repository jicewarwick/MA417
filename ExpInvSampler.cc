#include "ExpInvSampler.h"

ExpInvSampler::ExpInvSampler(double lambda){
	lambda_ = lambda;
}

double ExpInvSampler::getnumber(){
	UniformSampler *tmp = new UniformSampler;
	double ret = 0;
	ret = tmp->getnumber();
	ret = -log(ret) / lambda_;

	return ret;
}
