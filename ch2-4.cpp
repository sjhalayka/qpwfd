#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>


cd psi(cd x, cd n)
{
	const cd pcd(pi, 0.0);
	const cd mcd(1.0, 0.0);
	const cd acd(1.0, 0.0);

	return sqrt(2.0 / acd) * sin(n * pcd / acd * (x + acd / 2.0));
}

int main(void)
{
	for (double n = 1.0; n < 10.0; n += 1.0)
	{
		const cd ncd(n, 0.0);

		cout << psi(1.0, ncd) << endl;
	}

	return 0;
}
