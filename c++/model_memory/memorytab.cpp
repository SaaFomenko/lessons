#include <iostream>

int main() {
	short a = 0;
	int b = 0;
	long c = 0;
	long long d = 0;
	float e = 0;
	double g = 0;
	long double h = 0;
	bool m = false;

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << (&a - &b) << std::endl;

	return 0;
}
