#include "NormalAccSampler.h"
#include "ExpDoubleSampler.h"

double f(double x){
	double ret;
	ret = exp(-pow((abs(x)-1),2) / 2.0); 
	return ret;
}

double g(double x){
	return  1.0;
}

NormalAccSampler::NormalAccSampler(void) : AcceptanceRejectionSampler(f, g, 1){
}

NormalAccSampler::~NormalAccSampler(void){ }

