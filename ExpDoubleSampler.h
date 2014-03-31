#ifndef EXPDOUBLESAMPLER_H_TNVK3DWM
#define EXPDOUBLESAMPLER_H_TNVK3DWM

#include "Sampler.h"
#include "UniformSampler.h"
#include <vector>

class ExpDoubleSampler : public Sampler {
public:
	ExpDoubleSampler (void);
	virtual ~ExpDoubleSampler ();
	virtual double getnumber();
	virtual std::vector<double> getnumbers(int);
private:
	UniformSampler U_;
};


#endif /* end of include guard: EXPDOUBLESAMPLER_H_TNVK3DWM */
