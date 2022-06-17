#include <iostream>
#include <cmath>
#include <string>

void funcexer1() {
	std::cout << "6^5 is: " << pow(6,5) << std::endl;
	std::cout << std::endl;
}

void funcexer2(std::string name) {
	std::cout << "Hello " << name << "!" << std::endl;
	std::cout << std::endl;
}

int funcexer3(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int funcexer4(int c) {
	int sum = 0;
	for (int i = 0; i < c; i++) {
		sum = sum + i;
	}
	return sum;
}

int functions() { //main
	funcexer1();

	std::cout << "Enter name: ";
	std::string fe_name;
	getline(std::cin, fe_name);
	funcexer2(fe_name);

	std::cout << "Enter 2 integers seperated by a space: " << std::endl;
	int fe_x, fe_y;
	std::cin >> fe_x >> fe_y;
	int fe_max = funcexer3(fe_x, fe_y);
	std::cout << "The larger number is: " << fe_max << std::endl;

	std::cout << "Enter an integer: ";
	int fe_z;
	std::cin >> fe_z;
	int fe_sum = funcexer4(fe_z);
	std::cout << "The sum of all natural numbers up to that number is: " << fe_sum << std::endl;

	return 0;
}