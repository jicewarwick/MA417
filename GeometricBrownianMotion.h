#ifndef GEOMETRICBROWNIANMOTION_H_3850AB9M
#define GEOMETRICBROWNIANMOTION_H_3850AB9M

#include "BrownianMotion.h"

class GeometricBrownianMotion : public BrownianMotion {
public:
	GeometricBrownianMotion (double X0, double mean, double sigma);
	virtual ~GeometricBrownianMotion (){}

private:
	virtual double step(double currentX, double h);
	
};

#endif /* end of include guard: GEOMETRICBROWNIANMOTION_H_3850AB9M */

