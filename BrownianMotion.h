#ifndef BROWNIANMOTION_H_AMT9LZG3
#define BROWNIANMOTION_H_AMT9LZG3

#include "StochasticProcess.h"
#include "NormalBoxMullerSampler.h"

class BrownianMotion : public StochasticProcess{
public:
	BrownianMotion(void);
	BrownianMotion(double, double, double);
	virtual ~BrownianMotion (){}

	double getmean(void) const {return mean_;}
	double getsd(void) const {return sd_;}
	double getX0(void) const {return X0_;}
	double get_normal_rand(void) {return norm_.getnumber();}

	void setmean(double mean){mean_ = mean;}
	void setsd(double sd){sd_ = sd;}
	void setX0(double X0){X0_ = X0;}

private:
	double X0_;
	double mean_;
	double sd_;
	NormalBoxMullerSampler norm_;

	virtual double step(double currentX, double h);
};


#endif /* end of include guard: BROWNIANMOTION_H_AMT9LZG3 */

