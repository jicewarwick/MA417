#ifndef NORMALBOXMULLERSAMPLER_H_UJ90R1QK
#define NORMALBOXMULLERSAMPLER_H_UJ90R1QK

#include "Sampler.h"
#include <vector>

class NormalBoxMullerSampler : Sampler{
public:
	NormalBoxMullerSampler (void);
	virtual ~NormalBoxMullerSampler ();
	double getnumber();
	std::vector<double> getnumbers(int);
};

#endif /* end of include guard: NORMALBOXMULLERSAMPLER_H_UJ90R1QK */
