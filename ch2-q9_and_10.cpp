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
	const cd A(1.0, 0.0);
	const cd B(1.0, 0.0);
	const cd C(1.0, 0.0);
	const cd k1(1.0, 0.0);
	const cd k2(0.5, 0.0);
	const cd i(0.0, 1.0);
	const cd x(pi / 2.0, 0.0);
	const cd twocd(2.0, 0.0);
	const cd fourcd(4.0, 0.0);

	cd psi_1 = A * exp(i * k1 * x) + B * exp(-i * k1 * x);
	cd psi_2 = C * exp(i * k2 * x);

	cd R = (abs(B) * abs(B)) / (abs(A) * abs(A));
	cd T = (abs(C) * abs(C)) / (abs(A) * abs(A)) * (k2 / k1);

	cd R2 = pow(k1 - k2, twocd) / pow(k1 + k2, twocd);
	cd T2 = (fourcd * k1 * k2) / pow(k1 + k2, twocd);

	cout << R << endl << T << endl << endl << R2 << endl << T2 << endl;

	return 0;
}
