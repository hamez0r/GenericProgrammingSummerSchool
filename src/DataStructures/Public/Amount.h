#include <iostream>

struct Amount {
	Amount(const int dollars, const int cents);
	
	int dollars;
	int cents;
};

auto operator<<(std::ostream& os, const Amount& amount)->std::ostream&;