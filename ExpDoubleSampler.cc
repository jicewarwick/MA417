#include "ExpDoubleSampler.h"
#include "UniformSampler.h"
#include <cmath>

ExpDoubleSampler::ExpDoubleSampler(void){ }

ExpDoubleSampler::~ExpDoubleSampler(void){ }

double ExpDoubleSampler::getnumber() {
	double ret = 0;
	UniformSampler U;
	double tmp = U.getnumber();
	if (tmp > 0.5) {
		ret = - log(2 * (1 - tmp));
	} else{
		ret = log(2 * tmp);
	}
	return ret;
}
