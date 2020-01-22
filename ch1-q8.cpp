#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>


int main(void)
{
	size_t d = 6;

	// Create identity matrix
	cmat I(d, d);

	I << cd(1.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0),
		cd(0.0, 0.0), cd(1.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0),
		cd(0.0, 0.0), cd(0.0, 0.0), cd(1.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0),
		cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(1.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0),
		cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(1.0, 0.0), cd(0.0, 0.0),
		cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(0.0, 0.0), cd(1.0, 0.0);

	cout << disp(I) << endl << endl;

	return 0;
}
