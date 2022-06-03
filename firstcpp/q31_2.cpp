#include <iostream>
#include <iomanip>

int q31_2() {
	std::cout << "Enter price: ";
		double price;
	std::cin >> price;
	std::cout << "Enter discount rate: ";
		double rate;
	std::cin >> rate;

	double fprice = price * ((100 - rate) / 100);
	std::cout << "Price after discount is: " << std::fixed << std::setprecision(2) << fprice;

	return 0;
}