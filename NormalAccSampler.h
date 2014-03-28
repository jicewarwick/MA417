#ifndef NORMALACCSAMPLER_H_QFGIW8Q9
#define NORMALACCSAMPLER_H_QFGIW8Q9

#include <cmath>
#include "AcceptanceRejectionSampler.h"
#include "UniformSampler.h"
#include <vector>

class NormalAccSampler : public AcceptanceRejectionSampler{
public:
	NormalAccSampler (void);
	virtual ~NormalAccSampler (void);
	double getnumber(void);
	std::vector<double> getnumbers(int);

private:
	double (*f_) (double);
	double (*g_) (double);
	double c_;
};

#endif /* end of include guard: NORMALACCSAMPLER_H_QFGIW8Q9 */
