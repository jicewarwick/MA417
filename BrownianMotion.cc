#include "NormalAccSampler.h"
#include "BrownianMotion.h"
#include <cmath>

BrownianMotion::BrownianMotion(void){
	BrownianMotion(0, 0, 1);
}

BrownianMotion::BrownianMotion(double X0, double mean, double sigma){
	X0_ = X0;
	mean_ = mean;
	sd_ = sigma;
	NormalBoxMullerSampler norm_;
}

double BrownianMotion::step(double currentX, double h){
	double ret;
	ret = currentX + h * mean_ + sqrt(h) * sd_ * norm_.getnumber();
	return ret;
}
