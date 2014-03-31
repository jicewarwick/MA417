#include "ExpDoubleSampler.h"
#include <cmath>

ExpDoubleSampler::ExpDoubleSampler(void){ 
	U_ = UniformSampler();
}

ExpDoubleSampler::~ExpDoubleSampler(void){ }

double ExpDoubleSampler::getnumber() {
	double ret = U_.getnumber();
		if (ret > 0.5) {
			ret = - log(2 * (1 - ret));
		} else{
			ret = log(2 * ret);
		}
	return ret;
}
std::vector<double> ExpDoubleSampler::getnumbers(int n){
	std::vector<double> ret;
	for (int i = 0; i < n; ++i) {
		ret.push_back(getnumber());
	}
	return ret;
}
