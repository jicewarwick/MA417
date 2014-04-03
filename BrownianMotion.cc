#include "NormalAccSampler.h"
#include "BrownianMotion.h"
#include <cmath>

BrownianMotion::BrownianMotion(void){
	BrownianMotion(0,1);
}

BrownianMotion::BrownianMotion(double mean, double sigma){
	mean_ = mean;
	sd_ = sigma;
	NormalAccSampler norm_;
}

BrownianMotion::~BrownianMotion(){ }

double BrownianMotion::getnumber(){
	double ret = 0;
	ret = norm_.getnumber() * sd_;

	return ret;
}

