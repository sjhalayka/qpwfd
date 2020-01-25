#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>


cd psi_cos_sin(cd x, size_t n)
{
	const cd pcd(pi, 0.0);
	const cd mcd(1.0, 0.0);
	const cd acd(1.0, 0.0);
	const cd ncd(n, 0.0);

	cd ret;

	// If even, else odd
	if (n % 2 == 0)
		ret = sqrt(2.0 / acd) * sin(ncd * pcd * x / acd);
	else
		ret = sqrt(2.0 / acd) * cos(ncd * pcd * x / acd);

	return ret;
}

int main(void)
{
	for (size_t n = 1; n <= 10; n++)
		cout << psi_cos_sin(1.0, n) << endl;

	return 0;
}
