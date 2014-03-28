#ifndef EXPINVSAMPLER_H_SDIP3WTM
#define EXPINVSAMPLER_H_SDIP3WTM

#include <cmath>
#include "Sampler.h"
#include "UniformSampler.h"

class ExpInvSampler : Sampler {
	public:
		ExpInvSampler(double);
		double getnumber();

	private:
		double lambda_;

};

#endif /* end of include guard: EXPINVSAMPLER_H_SDIP3WTM */
