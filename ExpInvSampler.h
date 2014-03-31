#ifndef EXPINVSAMPLER_H_SDIP3WTM
#define EXPINVSAMPLER_H_SDIP3WTM

#include <cmath>
#include "Sampler.h"
#include "UniformSampler.h"

class ExpInvSampler : public Sampler {
	public:
		ExpInvSampler(double);
		~ExpInvSampler();
		double getnumber();
		std::vector<double> getnumbers(int n);

	private:
		double lambda_;
		UniformSampler U_;

};

#endif /* end of include guard: EXPINVSAMPLER_H_SDIP3WTM */
