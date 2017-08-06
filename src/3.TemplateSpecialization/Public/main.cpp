#include <iostream>
#include <sstream>
#include <map>

class Force {
public:
	enum class Units {
		N,
		mN,
		lbf,
		// etc..
	};

	static auto ToString(Units unit) -> std::string& {
		static std::map<Units, std::string> representations = {
			{Units::N, "N"},
			{Units::mN, "mN"},
			{Units::lbf, "lbf"}
		};

		return representations[unit];
	}
};

class Mass {
public:
	enum class Units {
		kg,
		g,
		lb,
		// etc..
	};

	static auto ToString(Units unit) -> std::string& {
		static std::map<Units, std::string> representations = {
			{ Units::kg, "kg" },
			{ Units::g, "g" },
			{ Units::lb, "lb" }
		};

		return representations[unit];
	}
};

class Velocity {
public:
	enum class Units {
		m_s,
		km_h,
		// etc..
	};

	static auto ToString(Units unit) -> std::string& {
		static std::map<Units, std::string> representations = {
			{ Units::m_s, "m/s" },
			{ Units::km_h, "km/h" }
		};

		return representations[unit];
	}
};

class Dimensionless {

};


template<typename T> class Parameter {
	// Implement this class
};

template<> class Parameter<Dimensionless> {
	// Implement this class
};

auto main() -> int {
	// Uncomment the part below when implementation is done

	//Parameter<Force> force(3.5, Force::Units::mN);
	//Parameter<Mass> mass(70, Mass::Units::kg);
	//Parameter<Dimensionless> scale(2.0);

	//std::cout << "Force: " << force.ToString() << std::endl;
	//std::cout << "Mass: " << mass.ToString() << std::endl;
	//std::cout << "Scale: " << scale.ToString() << std::endl;

	return 0;
}
