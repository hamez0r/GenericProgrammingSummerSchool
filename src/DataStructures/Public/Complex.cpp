#include <Complex.h>

Complex::Complex(const double re, const double im)
	: real(re), imaginary(im) { }

auto operator<<(std::ostream& os, const Complex& complex) -> std::ostream& {
	os << complex.real << " + " << complex.imaginary << "i";
	return os;
}