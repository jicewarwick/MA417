#include <iostream>
#include "Normals.h"
#include "Sampler.h"
#include "UniformSampler.h"
#include "ExpInvSampler.h"
#include "NormalAccSampler.h"
#include "NormalBoxMullerSampler.h"
#include "BrownianMotion.h"
#include "MonteCarloSimulation.h"
#include "ControlVariates.h"
#include <cmath>
#include <algorithm>
#include <ctime>

double f(double);
double g(double);

int main(){
	UniformSampler *U = new UniformSampler();
	std::vector<double> u = U->getnumbers(34);
	MonteCarloSimulation *uni_sim = new MonteCarloSimulation(*g, U, 1000000);
	double uni_mean = uni_sim->simulate();

	//Monte Carlo Simulation for \E[e^(-rT)(S(T)-K)]
	NormalBoxMullerSampler *W = new NormalBoxMullerSampler();
	long n = 10;
	double sigma = 0.3;
	MonteCarloSimulation *mon_sim = new MonteCarloSimulation(*f, W, n);
	double price_call = mon_sim->simulate();
	double lower_limit = price_call - InverseCumulativeNormal(.99) * sigma / sqrt(n);
	double upper_limit = price_call + InverseCumulativeNormal(.99) * sigma / sqrt(n);

	//Control Variates Estimator
	ControlVariates call(W, f, n, 0);
	//double call_var = call.getCotrolVariatesEstimator();

	//clean up
	U->~UniformSampler();

	std::cout << "Monte Carlo Estimator for mean of Uniform Distribution is " << uni_mean << std::endl;
	std::cout << "Monte Carlo Estimator for Call option is " << price_call << std::endl;
	std::cout << "With 98\% confidence interval: (" << lower_limit << "," << upper_limit << ")" << std::endl;
	//std::cout << "The control variates estimator for Y_i: " << call_var << std::endl;
	std::cout << "Antithetic estimator for Y_i: " << std::endl;
	return 0;
}

double g(double x){
	return x;
}

double f(double x){
	double T = 1;
	double sigma = 0.3;
	double r = 0.05;
	double K = 50;
	double S0 = 50;
	double ret = 0;
	ret = exp(-r * T)*(S0 * exp((r - pow(sigma, 2)/ 2.0) * T + sigma * x * sqrt(T)) - K);
	ret = std::max(ret, 0.0);

	return ret;
}
