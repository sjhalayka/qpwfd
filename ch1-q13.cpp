#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

#define cd complex<double>


int main(void)
{
	size_t d = 2;

	// Create operator matrix
	cmat A(d, d);

	A << cd(2.0, 0.0), cd(1.0, 0.0),
		cd(1.0, 0.0), cd(2.0, 0.0);

	pair<dyn_col_vect<cd>, cmat> p = eig(A);

	// Manually print eigenvalues and normalized eigenvectors
	for (size_t i = 0; i < d; i++)
		cout << disp(p.first(i)) << endl;

	for (size_t i = 0; i < d; i++)
		cout << disp(p.second.col(i)) << endl << endl;

	return 0;
}
