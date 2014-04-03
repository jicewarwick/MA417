#ifndef BROWNIANMOTION_H_AMT9LZG3
#define BROWNIANMOTION_H_AMT9LZG3

#include "Sampler.h"
#include "NormalAccSampler.h"
#include <vector>

class BrownianMotion : public Sampler {
public:
	BrownianMotion (void);
	BrownianMotion (double, double);
	virtual ~BrownianMotion ();

	double getmean(void) const {return mean_;}
	double getsd(void) const {return sd_;}

	void setmean(double mean){mean_ = mean;}
	void setsd(double sd){sd_ = sd;}

	virtual double getnumber();
	//std::vector<double> getnumbers(int);

private:
	double mean_;
	double sd_;
	NormalAccSampler norm_;
};


#endif /* end of include guard: BROWNIANMOTION_H_AMT9LZG3 */

