#ifndef UNIFORMSAMPLER_H_UHPWUTQT
#define UNIFORMSAMPLER_H_UHPWUTQT

#include "Sampler.h"

class UniformSampler : public Sampler{
	public:
		UniformSampler();
		~UniformSampler();
		double getnumber();
		double getnumber(double, double);
};

#endif /* end of include guard: UNIFORMSAMPLER_H_UHPWUTQT */
