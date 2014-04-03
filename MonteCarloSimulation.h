#ifndef MONTECARLOSIMULATION_H_V1M6GMW2
#define MONTECARLOSIMULATION_H_V1M6GMW2

#include "Sampler.h"

class MonteCarloSimulation {
public:
	MonteCarloSimulation (double (*f) (double), Sampler* randgen, int n = 10000);
	virtual ~MonteCarloSimulation ();
	double simulate();

private:
	double (*f_) (double);
	Sampler *randgen_;
	int n_;
};


#endif /* end of include guard: MONTECARLOSIMULATION_H_V1M6GMW2 */

