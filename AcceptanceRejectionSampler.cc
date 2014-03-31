#include "AcceptanceRejectionSampler.h"
#include "ExpDoubleSampler.h"
const double PI = atan(1)*4;

AcceptanceRejectionSampler::AcceptanceRejectionSampler(double (*f) (double), double (*g) (double), double c) : Sampler(){
	f_ = f;
	g_ = g;
	c_ = c;
	U_ = UniformSampler();
}

AcceptanceRejectionSampler::~AcceptanceRejectionSampler(void){ }

double AcceptanceRejectionSampler::getnumber(void){
	double ret = getnumbers(1)[0];
	return ret;
}

std::vector<double> AcceptanceRejectionSampler::getnumbers(int n){
	int i = 0;
	std::vector<double> ret;
	ExpDoubleSampler *double_exp = new ExpDoubleSampler();
	do {
		double U = U_.getnumber();
		double X = double_exp->getnumber(); 
		if (U > (f_(X) / c_ / g_(X))) {
			ret.push_back(X);
			i++;
		}
	} while( i < n );
	return ret;
}



