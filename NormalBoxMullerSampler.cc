#include "NormalBoxMullerSampler.h"
#include "UniformSampler.h"
#include <cmath>

const double PI = atan(1) * 4;

NormalBoxMullerSampler::NormalBoxMullerSampler(void) : Sampler(){}
NormalBoxMullerSampler::~NormalBoxMullerSampler(void){}

std::vector<double> NormalBoxMullerSampler::getnumbers(int n){
	std::vector<double> ret;
	UniformSampler *U = new UniformSampler();
	double U1 = 0, U2 = 0, R = 0, theta = 0;
	int rep = ceil(n / 2.0);
	for (int i = 0; i < rep; ++i) {
		U1 = U->getnumber();
		U2 = U->getnumber();
		R = -2 * log(U1);
		theta = 2 * PI * U2;
		ret.push_back( sqrt(R) * cos(theta) );
		ret.push_back( sqrt(R) * sin(theta) );
	}
	if (n % 2 == 1) {
		ret.pop_back();
	}
	return ret;
}

double NormalBoxMullerSampler::getnumber(){
	double ret;
	ret = getnumbers(1)[0];
	return ret;
}
