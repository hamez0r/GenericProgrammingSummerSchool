#include <iostream>

#include <Amount.h>
#include <Complex.h>

auto add(int x, int y) -> int {
	return 0;
}

auto add(double x, double y) -> double {
	return 0.0;
}

auto add(const Complex& x, const Complex& y) -> Complex {
	// Implement this function
	return Complex(0.0, 0.0);
}

auto add(const Amount& x, const Amount& y) -> Amount {
	// Implement this function
	return Amount(0, 0);
}

/************************************************************************************************************************/

auto main() -> int {
	int one { 1 };
	int two { 2 };

	std::cout << "1 + 2 = " << add(one, two) << std::endl;

	/************************************************************************************************************************/

	double threePointFive { 3.5 };
	double fourPointSix { 4.6 };

	std::cout << "3.5 + 4.6 = " << add(threePointFive, fourPointSix) << std::endl;

	/************************************************************************************************************************/

	Amount electricityBill(15, 90);
	Amount gasBill(20, 30);

	std::cout << "I have to pay " << add(electricityBill, gasBill)  << " for gas and electricity" << std::endl;

	/************************************************************************************************************************/

	Complex somethingComplex(2.0, 0.0);
	Complex anotherComplexThing(3.0, 24.0);

	std::cout << "The total complexity is " << add(somethingComplex, anotherComplexThing) << std::endl;

	return 0;
}