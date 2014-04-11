#include <fstream>
#include "dataExport.h"


void export_to_file(double* data, int n, std::string filename){
	std::ofstream output(filename);

	if (output.is_open()) {
		output << data[0];
		for (int i = 1; i < n; ++i) {
			output << ',' << data[i];
		}
	}
	output.close();

}
