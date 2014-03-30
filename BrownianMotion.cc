#include "NormalAccSampler.h"
#include "BrownianMotion.h"
#include <cmath>

BrownianMotion::BrownianMotion(void){
	mean_ = 0;
	sd_ = 1;
}

BrownianMotion::BrownianMotion(double mean, double sigma){
	mean_ = mean;
	sd_ = sigma;
}

BrownianMotion::~BrownianMotion(){ }

double BrownianMotion::getmean(){
	return mean_;
}

double BrownianMotion::getsd(void){
	return sd_;
}

void BrownianMotion::setmean(double mean){
	mean_ = mean;
}

void BrownianMotion::setsd(double sd){
	sd_ = sd;
}

double BrownianMotion::getnumber(){
	double ret = 0;
	NormalAccSampler *norm = new NormalAccSampler();
	ret = norm->getnumber() * sd_;

	return ret;
}

