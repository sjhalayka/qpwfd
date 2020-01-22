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
	size_t d = 2;

	// Create operator matrix
	cmat A(d, d);

	A << cd(1.0, 0.0), cd(0.0, 0.0),
		cd(0.0, 0.0), cd(1.0, 0.0);

	cmat B(d, d);

	B = adjoint(A);

	if (A == B)
		cout << "Operator is Hermitian" << endl;
	else
		cout << "Operator is not Hermitian" << endl;

	A << cd(1.0, 1.0), cd(2.0, 2.0),
		cd(3.0, 3.0), cd(4.0, 4.0);

	B = adjoint(A);

	if (A == B)
		cout << "Operator is Hermitian" << endl;
	else
		cout << "Operator is not Hermitian" << endl;

	return 0;
}
