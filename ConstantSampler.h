#ifndef CONSTANTSAMPLER_H_ZXGNFWXT
#define CONSTANTSAMPLER_H_ZXGNFWXT

#include "Sampler.h"

class ConstantSampler : public Sampler {
public:
	ConstantSampler (double X0){X0_ = X0;}
	virtual ~ConstantSampler (){}
	double getnumber(){return X0_;}

private:
	double X0_;
};

#endif /* end of include guard: CONSTANTSAMPLER_H_ZXGNFWXT */

