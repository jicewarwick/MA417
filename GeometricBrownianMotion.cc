#include "GeometricBrownianMotion.h"
#include <cmath>

GeometricBrownianMotion::GeometricBrownianMotion (double X0, double mean, double sigma){ 
	X0_ = X0;
	mean_ = mean;
	sd_ = sigma;
	NormalBoxMullerSampler norm_;
}

double GeometricBrownianMotion::step(double currentX, double h){
	double ret = mean_ - pow(sd_, 2) / 2.0;
	ret = ret * h + sd_ * sqrt(h) * norm_.getnumber();
	ret = currentX * exp(ret);

	return ret;
}
