#ifndef COMPOUNDPOISSONPROCESS_H_SDV6LMEO
#define COMPOUNDPOISSONPROCESS_H_SDV6LMEO

#include "Sampler.h"
#include "StochasticProcess.h"

class CompoundPoissonProcess : public StochasticProcess {
public:
	CompoundPoissonProcess (double lambda);
	CompoundPoissonProcess (double lambda, Sampler* Y);
	virtual ~CompoundPoissonProcess (){}
	
	double get_lambda() const {return lambda_;}
	Sampler* get_Sampler() const {return Y_;}

	void set_lambda(double lambda){lambda_ = lambda;}
	void set_Sampler(Sampler* Y){Y_ = Y;}


	double get_terminalvalue(double T, int numberofsteps, double X0);
	void get_samplepath(double T, int numberofsteps, double X0, double *p);

private:
	double lambda_;
	Sampler* Y_;
	double step(double currentX, double h){}

};

#endif /* end of include guard: COMPOUNDPOISSONPROCESS_H_SDV6LMEO */

