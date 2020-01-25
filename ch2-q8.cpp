#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>


cd psi_1(const cd x)
{
	const cd pcd(pi, 0.0);
	const cd acd(1.0, 0.0);
	const cd twocd(2.0, 0.0);

	return sqrt(twocd / acd) * cos(pcd * x / acd);
}

cd psi_2(const cd x)
{
	const cd pcd(pi, 0.0);
	const cd acd(1.0, 0.0);
	const cd twocd(2.0, 0.0);

	return sqrt(twocd / acd) * sin(twocd * pcd * x / acd);
}

cd psi_3(const cd x)
{
	const cd pcd(pi, 0.0);
	const cd acd(1.0, 0.0);
	const cd twocd(2.0, 0.0);
	const cd threecd(3.0, 0.0);

	return sqrt(twocd / acd) * cos(threecd * pcd * x / acd);
}

cd psi_4(const cd x)
{
	const cd pcd(pi, 0.0);
	const cd acd(1.0, 0.0);
	const cd twocd(2.0, 0.0);
	const cd fourcd(3.0, 0.0);

	return sqrt(twocd / acd) * sin(fourcd * pcd * x / acd);
}


int main(void)
{
	cout << psi_1(1.0) << endl;
	cout << psi_2(1.0) << endl;
	cout << psi_3(1.0) << endl;
	cout << psi_4(1.0) << endl;

	return 0;
}
