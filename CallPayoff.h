#ifndef CALLPAYOFF_H_R82THIZY
#define CALLPAYOFF_H_R82THIZY

#include "Payoff.h"

class CallPayoff {
public:
	CallPayoff (double S);
	virtual ~CallPayoff ();
	double getStrike();
	double computepayoff(double spot) const;

private:
	double Strike_;
};

#endif /* end of include guard: CALLPAYOFF_H_R82THIZY */

