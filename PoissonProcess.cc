#include "PoissonProcess.h"
#include "ConstantSampler.h"
#include "cstdlib"


PoissonProcess::PoissonProcess (double lambda):CompoundPoissonProcess(lambda, NULL){
	ConstantSampler* Y = new ConstantSampler(1);
	set_Sampler(Y);
}
