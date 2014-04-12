#ifndef STOCHASTICPROCESS_H_IZABVGRC
#define STOCHASTICPROCESS_H_IZABVGRC

class StochasticProcess {
public:
	StochasticProcess(){}
	virtual ~StochasticProcess(){}
	virtual double get_terminalvalue(double T, int numberofsteps, double X0);
	virtual void get_samplepath(double T, int numberofsteps, double X0, double *p);

private:
	virtual double step(double currentX, double h)=0;
};

#endif /* end of include guard: STOCHASTICPROCESS_H_IZABVGRC */

