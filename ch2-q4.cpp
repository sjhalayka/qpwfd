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
	const cd pcd(pi, 0.0);
	const cd hbarcd(1.0545718e-34, 0.0);

	const cd mcd(9.11e-31, 0.0); // Electron mass
	const cd acd(5e-11, 0.0); // Electron Bohr radius

	// Print ground energy
	cout << (hbarcd * hbarcd * pcd * pcd) / (2.0 * mcd * acd * acd) << endl;

	return 0;
}
