#ifndef BROWNIANMOTION_H_AMT9LZG3
#define BROWNIANMOTION_H_AMT9LZG3

#include "Sampler.h"

class BrownianMotion : public Sampler {
public:
	BrownianMotion (void);
	BrownianMotion (double mean = 0, double sigma = 1, double  T = 1);
	virtual ~BrownianMotion ();
	double getmean(void);
	double getsd(void);
	double getnumber();

private:
	double mean_;
	double sd_;
	double T_;
};


#endif /* end of include guard: BROWNIANMOTION_H_AMT9LZG3 */

