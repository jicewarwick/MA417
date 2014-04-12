#ifndef POISSONPROCESS_H_XQNJKPEE
#define POISSONPROCESS_H_XQNJKPEE

#include "CompoundPoissonProcess.h"

class PoissonProcess : public CompoundPoissonProcess {
public:
	PoissonProcess (double lambda);
	virtual ~PoissonProcess (){get_Sampler()->~Sampler();}

private:
	double step(double currentX, double h){}
};

#endif /* end of include guard: POISSONPROCESS_H_XQNJKPEE */

