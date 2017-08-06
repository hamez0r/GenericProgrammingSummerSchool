#include <iostream>

struct Complex {
	Complex(const double re, const double im);
	
	double real;
	double imaginary;
};

auto operator<<(std::ostream& os, const Complex& complex)->std::ostream&;