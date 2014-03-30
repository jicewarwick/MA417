#ifndef BROWNIANMOTION_H_AMT9LZG3
#define BROWNIANMOTION_H_AMT9LZG3

#include "Sampler.h"
#include <vector>

class BrownianMotion : public Sampler {
public:
	BrownianMotion (void);
	BrownianMotion (double mean = 0, double sigma = 1);
	virtual ~BrownianMotion ();

	double getmean(void);
	double getsd(void);

	void setmean(double);
	void setsd(double);

	virtual double getnumber();

private:
	double mean_;
	double sd_;
};


#endif /* end of include guard: BROWNIANMOTION_H_AMT9LZG3 */

