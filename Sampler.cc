#include "Sampler.h"

std::vector<double> Sampler::getnumbers(int n){
	std::vector<double> ret;
	for (int i = 0; i < n; ++i) {
		ret.push_back(getnumber());
	}
	return ret;
}
