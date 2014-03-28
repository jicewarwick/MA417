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

NormalAccSampler::NormalAccSampler(void){
	f_ = &f;
	g_ = &g;
	c_ = 1;
	AcceptanceRejectionSampler(f_, g_, c_);
}

NormalAccSampler::~NormalAccSampler(void){
	f_ = NULL;
	g_ = NULL;
}

double NormalAccSampler::getnumber(void){
	double ret = getnumbers(1)[0];
	return ret;
}

std::vector<double> NormalAccSampler::getnumbers(int n){
	int i = 0;
	std::vector<double> ret;
	UniformSampler *Uni = new UniformSampler();
	ExpDoubleSampler *double_exp = new ExpDoubleSampler();
	do {
		double U = Uni->getnumber();
		double X = double_exp->getnumber(); 
		if (U > (f_(X) / c_ / g_(X))) {
			ret.push_back(X);
			i++;
		}
	} while( i < n );
	return ret;
}

