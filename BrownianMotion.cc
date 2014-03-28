#include "Normals.h"
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

double BrownianMotion::getWt(double t){
	double ret = 0;

	return ret;
}



