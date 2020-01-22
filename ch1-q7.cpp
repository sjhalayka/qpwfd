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

	bra b(d);

	b << cd(1.0 / sqrt(2.0), 0.0), cd(1.0 / sqrt(2.0), 0.0);

	ket k(d);

	k << cd(1.0 / sqrt(2.0), 0.0), cd(-1.0 / sqrt(2.0), 0.0);

	cout << disp(b * k) << endl;

	return 0;
}
