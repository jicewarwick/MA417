#include <iostream>
#include "Sampler.h"
#include "UniformSampler.h"
#include "BrownianMotion.h"
#include "MonteCarloSimulation.h"
#include <cmath>
#include <vector>

double f(double);

int main(int argc, char *argv[]) {

	//Monte Carlo Simulation for \E[e^(-rT)(S(T)-K)]
	double T = 1;
	double sigma = 0.3;
	BrownianMotion *W = new BrownianMotion(0, sigma * sqrt(T));
	MonteCarloSimulation *mon_sim = new MonteCarloSimulation(*f, W, 1000000);
	double price_call = mon_sim->simulate();

	std::cout << "Monte Carlo Estimator for Call option is " << price_call << std::endl;
	std::cout << "The control variates estimator for Y_i: " << std::endl;
	std::cout << "Antithetic estimator for Y_i: " << std::endl;
	return 0;
}

double f(double x){
	double T = 1;
	double sigma = 0.3;
	double r = 0.05;
	double K = 50;
	double S0 = 50;
	double ret = 0;
	ret = exp(-r * T)*(S0 *exp((r-pow(sigma, 2)*T)+ sigma * x) - K);

	return std::max(ret, 0.0);
}
