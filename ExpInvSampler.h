#ifndef EXPINVSAMPLER_H_SDIP3WTM
#define EXPINVSAMPLER_H_SDIP3WTM

#include "Sampler.h"
#include "UniformSampler.h"

class ExpInvSampler : public Sampler {
public:
	ExpInvSampler(double);
	virtual ~ExpInvSampler(){}
	double getnumber();

private:
	double lambda_;
	UniformSampler U_;
};

#endif /* end of include guard: EXPINVSAMPLER_H_SDIP3WTM */
