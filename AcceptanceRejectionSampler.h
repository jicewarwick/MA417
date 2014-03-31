#ifndef ACCEPTANCEREJECTIONSAMPLER_H_O4IVNCEY
#define ACCEPTANCEREJECTIONSAMPLER_H_O4IVNCEY

#include <cmath>
#include "Sampler.h"
#include "UniformSampler.h"
#include <vector>
#include <cstdlib>

class AcceptanceRejectionSampler : public Sampler{
public:
	AcceptanceRejectionSampler(double (*f) (double) = NULL, double (*g) (double) = NULL, double c = 0);
	virtual ~AcceptanceRejectionSampler (void);
	virtual double getnumber(void);
	virtual std::vector<double> getnumbers(int);
	

private:
	double (*f_) (double);
	double (*g_) (double);
	double c_;
	UniformSampler U_;
};

#endif /* end of include guard: ACCEPTANCEREJECTIONSAMPLER_H_O4IVNCEY */
