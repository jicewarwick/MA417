#include "StochasticProcess.h"


double StochasticProcess::get_terminalvalue(double T, int numberofsteps, double X0){
	double ret = X0;
	double h = T / (double) numberofsteps;
	for (int i = 0; i < numberofsteps; ++i) {
		ret = step(ret, h);
	}
	return ret;
}

void StochasticProcess::get_samplepath(double T, int numberofsteps, double X0, double *p){
	double ret = X0;
	p[0] = X0;
	double h = T / (double) numberofsteps;
	for (int i = 1; i <= numberofsteps; ++i) {
		ret = step(ret, h);
		p[i] = ret;
	}
}
