#include <iostream>
#include <iomanip>
#include <cmath>

int main() { //main
	// q2
	int q2a[3], q2b[3];
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter a number:";
		std::cin >> q2a[i];
	}
	for (int j = 0; j < 3; j++) {
		int q2diff = abs(51 - q2a[j]);
		if (q2a[j] > 51) {
			q2b[j] = 3 * q2diff;
		} else {
			q2b[j] = q2diff;
		}
	}
	for (int k = 0; k < 3; k++) {
		std::cout << q2b[k] << " ";
	}
	std::cout << "\n" << std::endl;

	//q13
	int q13a, q13b;
	std::cout << "Enter 2 numbers separated by space: " << std::endl;
	std::cin >> q13a >> q13b;
	bool q13;
	if ((q13a > 100 && q13b < 0) || (q13a < 0 && q13b>100)) {
		q13 = true;
	} else {
		q13 = false;
	}
	std::cout << std::boolalpha << q13 << std::endl;
	std::cout << std::endl;

	//q15
	int q15a, q15b, q15c;
	std::cout << "Enter 3 numbers separated by space: " << std::endl;
	std::cin >> q15a >> q15b >> q15c;
	bool q15;
	if (q15a >= 20 && q15a <= 50 || q15b >= 20 && q15b <= 50 || q15c >= 20 && q15c <= 50) {
		q15 = true;
	} else {
		q15 = false;
	}
	std::cout << std::boolalpha << q15 << std::endl;
	std::cout << std::endl;
	
	//q19
	int q19a, q19b;
	std::cout << "Enter 2 numbers separated by space: " << std::endl;
	std::cin >> q19a >> q19b;
	bool q19;
	int q19ad = abs(100 - q19a);
	int q19bd = abs(100 - q19b);
	if (q19a == q19b) {
		q19 = 0;
	} else if (q19ad > q19bd) {
		std::cout << q19b << std::endl;
	} else {
		std::cout << q19a << std::endl;
	}
	std::cout << std::endl;
	
	//q23
	int q23a, q23b;
	std::cout << "Enter 2 numbers separated by space: " << std::endl;
	std::cin >> q23a >> q23b;
	bool q23;
	if (q23a % 10 == q23b % 10) {
		q23 = true;
	} else {
		q23 = false;
	}
	std::cout << std::boolalpha << q23 << std::endl;
	std::cout << std::endl;

	return 0;
}