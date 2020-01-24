#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

#include "qpp.h"
using namespace qpp;

// abbreviate some syntax
#define cd complex<double>

// https://homepage.univie.ac.at/reinhold.bertlmann/pdfs/T2_Skript_Ch_4.pdf
// http://www.mathcentre.ac.uk/resources/Engineering%20maths%20first%20aid%20kit/latexsource%20and%20diagrams/7_7.pdf
// http://www.astro.uvic.ca/~jwillis/teaching/phys215/phys215_lecture4.pdf
// http://physics.mq.edu.au/~jcresser/Phys201/LectureNotes/SchrodingerEqn.pdf


int main(void)
{
	const cd ecd(ee, 0.0);
	const cd icd(0.0, 1.0);

	// Plot forms a loop
	for (double x = 0.0; x <= 2 * pi; x += pi / 2.0)
	{
		const cd xcd(x, 0.0);

		// They are one and the same
		cd a = cos(xcd) + icd * sin(xcd);
		cd b = pow(ecd, icd * xcd);

		cout << a << endl;
		cout << b << endl;
		cout << endl;
	}

	return 0;
}
