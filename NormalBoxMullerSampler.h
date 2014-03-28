#ifndef NORMALBOXMULLERSAMPLER_H_UJ90R1QK
#define NORMALBOXMULLERSAMPLER_H_UJ90R1QK

#include "Sampler.h"

class NormalBoxMullerSampler : Sampler{
public:
	NormalBoxMullerSampler (void);
	virtual ~NormalBoxMullerSampler ();
	double getnumber();
	void getnumbers(double*, double*);
};

#endif /* end of include guard: NORMALBOXMULLERSAMPLER_H_UJ90R1QK */
