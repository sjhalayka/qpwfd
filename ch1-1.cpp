#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>

// http://www-keeler.ch.cam.ac.uk/lectures/quant_a4.pdf

int main(void)
{
	// allocate enough space to hold the count of the number of ways of rolling
	// a two through twelve inclusive, on a pair of six-sided dice
	// d stands for dimension
	size_t d = 11;

	// Create bra
	bra b(d);

	// Set bra values
	b << cd(1.0, 0.0), // there is only 1 way to roll a total of two
		cd(2.0, 0.0), // three
		cd(3.0, 0.0), // four
		cd(4.0, 0.0), // five
		cd(5.0, 0.0), // six
		cd(6.0, 0.0), // seven
		cd(5.0, 0.0), // eight
		cd(4.0, 0.0), // nine
		cd(3.0, 0.0), // ten
		cd(2.0, 0.0), // eleven
		cd(1.0, 0.0); // twelve

	// Get sum
	cd s;

	for (size_t i = 0; i < d; i++)
		s += b[i];

	double sum = abs(s);

	// Convert probabilities to probability amplitudes, normalize
	for (size_t i = 0; i < d; i++)
		b[i] = sqrt(b[i] / sum);

	// Create ket
	ket k(d);

	// Automatically assign values
	k = b;

	// Print stuff
	cout << disp(b) << endl << endl;
	cout << disp(k) << endl << endl;
	cout << disp(b * k) << endl << endl;

	return 0;
}
