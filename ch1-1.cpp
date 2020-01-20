#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// http://www-keeler.ch.cam.ac.uk/lectures/quant_a4.pdf

int main(void)
{
	// allocate enough space to hold the count of the number of ways of rolling
	// a two through twelve inclusive, on a pair of six-sided dice
	size_t d = 11;

	// Create bra
	bra b(d);

	// Set bra values
	b << complex<double>(1.0, 0.0), // there is only 1 way to roll a total of two
		complex<double>(2.0, 0.0), // three
		complex<double>(3.0, 0.0), // four
		complex<double>(4.0, 0.0), // five
		complex<double>(5.0, 0.0), // six
		complex<double>(6.0, 0.0), // seven
		complex<double>(5.0, 0.0), // eight
		complex<double>(4.0, 0.0), // nine
		complex<double>(3.0, 0.0), // ten
		complex<double>(2.0, 0.0), // eleven
		complex<double>(1.0, 0.0); // twelve

	// Get sum
	complex<double> s;

	for (size_t i = 0; i < d; i++)
		s += b[i];

	double sum = abs(s);

	// Convert probabilities to probability amplitudes, normalize
	for (size_t i = 0; i < d; i++)
		b[i] = sqrt(b[i]/sum);

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
