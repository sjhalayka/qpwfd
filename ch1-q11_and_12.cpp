#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>


cmat commutator(const cmat &A, const cmat &B)
{
	return A*B - B*A;
}

cmat Hermitian_commutator(const cmat& A, const cmat& B)
{
	return B*A - A*B;
}

int main(void)
{
	size_t d = 2;

	cmat A(d, d);
		
	A << cd(1.0, 0.0), cd(2.0, 0.0),
		cd(3.0, 0.0), cd(4.0, 0.0);

	cmat B(d, d);

	B << cd(5.0, 0.0), cd(6.0, 0.0),
		cd(7.0, 0.0), cd(8.0, 0.0);

	cout << disp(commutator(A, B)) << endl << endl;
	cout << disp(Hermitian_commutator(A, B)) << endl << endl;
	cout << disp(-commutator(A, B)) << endl << endl;

	return 0;
}
