#include <iostream>

double getheight() {
	std::cout << "Enter height: ";
	double height;
	std::cin >> height;
	return height;
}

double getwidth() {
	std::cout << "Enter width: ";
	double width;
	std::cin >> width;
	return width;
}

double getlength() {
	std::cout << "Enter length: ";
	double length;
	std::cin >> length;
	return length;
}

int q31_3() {
	double height = getheight();
	double width = getwidth();
	double length = getlength();
	double vol = height * width * length;
	std::cout << "The volume is: " << vol;
	return 0;
}