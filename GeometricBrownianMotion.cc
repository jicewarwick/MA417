#include "GeometricBrownianMotion.h"
#include <cmath>

GeometricBrownianMotion::GeometricBrownianMotion (double X0, double mean, double sigma) : BrownianMotion(X0, mean, sigma){
}

double GeometricBrownianMotion::step(double currentX, double h){
	double ret = getmean() - pow(getsd(), 2) / 2.0;
	ret = ret * h + getsd() * sqrt(h) * get_normal_rand();
	ret = currentX * exp(ret);

	return ret;
}
