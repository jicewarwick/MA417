#ifndef GEOMETRICBROWNIANMOTION_H_3850AB9M
#define GEOMETRICBROWNIANMOTION_H_3850AB9M

#include "BrownianMotion.h"

class GeometricBrownianMotion : public StochasticProcess {
public:
	GeometricBrownianMotion (double X0, double mean, double sigma);
	virtual ~GeometricBrownianMotion (){}

private:
	double X0_;
	double mean_;
	double sd_;
	NormalBoxMullerSampler norm_;

	virtual double step(double currentX, double h);
	
};

#endif /* end of include guard: GEOMETRICBROWNIANMOTION_H_3850AB9M */

