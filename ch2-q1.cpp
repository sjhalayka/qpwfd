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
	const double hbar(1.0545718e-34);

	const double m(1.0);
	const double E(1.0);

	const cd k(sqrt(2.0 * m * E) / hbar, 0.0);

	cout << k << endl;

	return 0;
}