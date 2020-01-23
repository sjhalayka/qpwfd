#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>


cd psi(cd x)
{
	// Constants to be determined later on
	const cd A(1.0, 0.0);
	const cd B(1.0, 0.0);
	const cd k(1.0, 0.0);

	return A * sin(x * k) + B * cos(x * k);
}

int main(void)
{
	for (double x = 0.0; x < 2 * pi; x += pi / 2.0)
	{
		const cd xcd(x, 0.0);

		cd a = psi(xcd);

		cout << a << endl;
		cout << endl;
	}

	return 0;
}
