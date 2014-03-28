#include "NormalBoxMullerSampler.h"
#include "UniformSampler.h"
#include <cmath>

const double PI = atan(1) * 4;

NormalBoxMullerSampler::NormalBoxMullerSampler(void){}
NormalBoxMullerSampler::~NormalBoxMullerSampler(void){}

void NormalBoxMullerSampler::getnumber(double* X1, double* X2){
	UniformSampler *U = new UniformSampler();
	double U1 = U->getnumber();
	double U2 = U->getnumber();
	double R = -2 * log(U1);
	double theta = 2 * PI * U2;
	*X1 = sqrt(R) * cos(theta);
	*X2 = sqrt(R) * sin(theta);
}
