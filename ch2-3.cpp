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

	const cd mcd(1.0, 0.0);
	const cd acd(1.0, 0.0);

	// Print energy levels
	for (double n = 0; n < 10.0; n += 1.0)
	{
		const cd ncd(n, 0.0);

		cout << (ncd * ncd * hbarcd * hbarcd * pcd * pcd) / (2.0 * mcd * acd * acd) << endl;
	}

	return 0;
}
