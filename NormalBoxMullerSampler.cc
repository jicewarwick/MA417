#include "NormalBoxMullerSampler.h"
#include "UniformSampler.h"
#include <cmath>

const double PI = atan(1) * 4;

NormalBoxMullerSampler::NormalBoxMullerSampler(void) : Sampler(){}
NormalBoxMullerSampler::~NormalBoxMullerSampler(void){}

void NormalBoxMullerSampler::getnumbers(double* X1, double* X2){
	UniformSampler *U = new UniformSampler();
	double U1 = U->getnumber();
	double U2 = U->getnumber();
	double R = -2 * log(U1);
	double theta = 2 * PI * U2;
	*X1 = sqrt(R) * cos(theta);
	*X2 = sqrt(R) * sin(theta);
}

double NormalBoxMullerSampler::getnumber(){
	double *ret = 0;
	double *tmp = 0;
	getnumbers(ret, tmp);
	return *ret;
}
