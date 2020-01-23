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
	cd x(1.0, 0.0);
	cd e(ee, 0.0);
	cd p(pi, 0.0);
	cd i(0.0, 1.0);

	cd a = cos(x) + i*sin(x);
	cd b = pow(e, i*x);

	cout << a << endl;
	cout << b << endl;

	return 0;
}
