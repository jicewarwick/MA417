#include "BrownianMotion.h"
#include "GeometricBrownianMotion.h"
#include "PoissonProcess.h"
#include <iostream>
#include <cmath>
#include "dataExport.h"

int main(int argc, char *argv[]) {
	double X0 = 2;
	double mu = 1;
	double sigma = 1;
	double T = 3;
	int N = 10000;

	double b_sample_path[N+1];
	double gb_sample_path[N+1];
	double po_sample_path[N+1];

	BrownianMotion B(X0, mu, sigma);
	B.get_samplepath(T, N, X0, b_sample_path);

	GeometricBrownianMotion GB(X0, mu, sigma);
	GB.get_samplepath(T, N, X0, gb_sample_path);

	PoissonProcess Po(mu);
	Po.get_samplepath(T, N, X0, po_sample_path);

	export_to_file(b_sample_path, N+1, "BM.dat");
	export_to_file(gb_sample_path, N+1, "GBM.dat");
	export_to_file(po_sample_path, N+1, "Po.dat");
	
	return 0;
}
