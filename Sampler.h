#ifndef SAMPLER_H_ZKCGVOHS
#define SAMPLER_H_ZKCGVOHS

#include <cstdlib>
#include <vector>

class Sampler{
	public:
		Sampler(){}
		~Sampler(){}
		virtual double getnumber() = 0;
		virtual std::vector<double> getnumbers(int);
};

#endif /* end of include guard: SAMPLER_H_ZKCGVOHS */

