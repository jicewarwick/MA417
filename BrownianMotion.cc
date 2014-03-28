#include "Normals.h"
#include "BrownianMotion.h"
#include <cmath>

BrownianMotion::BrownianMotion(void){
	mean_ = 0;
	sd_ = 1;
}

BrownianMotion::BrownianMotion(double mean, double sigma, double T){
	mean_ = mean;
	sd_ = sigma;
	T_ = T;
}

BrownianMotion::~BrownianMotion(){ }

double BrownianMotion::getmean(){
	return mean_;
}

double BrownianMotion::getsd(void){
	return sd_;
}

double BrownianMotion::getnumber(){
	double ret = 0;

	return ret;
}



