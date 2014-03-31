#include <iostream>
#include "Sampler.h"
#include "UniformSampler.h"
#include "NormalAccSampler.h"
#include "NormalBoxMullerSampler.h"
#include "MonteCarloSimulation.h"
#include <cmath>
#include <algorithm>
#include <ctime>

double f(double);
double g(double);

int main(int argc, char *argv[]) {
	UniformSampler *U = new UniformSampler();
	MonteCarloSimulation *uni_sim = new MonteCarloSimulation(*g, U, 1000000);
	double uni_mean = uni_sim->simulate();


	//Monte Carlo Simulation for \E[e^(-rT)(S(T)-K)]
	NormalBoxMullerSampler *W = new NormalBoxMullerSampler();
	MonteCarloSimulation *mon_sim = new MonteCarloSimulation(*f, W, 1000000);
	double price_call = mon_sim->simulate();

	//clean up
	U->~UniformSampler();
	W->~NormalBoxMullerSampler();

	std::cout << "Monte Carlo Estimator for mean of Uniform Distribution is " << uni_mean << std::endl;
	std::cout << "Monte Carlo Estimator for Call option is " << price_call << std::endl;
	std::cout << "The control variates estimator for Y_i: " << std::endl;
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
