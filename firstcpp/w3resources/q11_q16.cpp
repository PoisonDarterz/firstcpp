#include <iostream>
#include <iomanip>
#include <cmath>

int q11_q16() {
	//q12
	int q12x, q12y;
	std::cout << "Sum of two numbers :\n-------------------------" << std::endl;
	std::cout << "Input 1st number: ";
	std::cin >> q12x;
	std::cout << "Input 2nd number: ";
	std::cin >> q12y;
	int sum = q12x + q12y;
	std::cout << "The sum is: " << sum << std::endl;
	std::cout << std::endl;

	//q13
	int q13x, q13y, temp;
	std::cout << "Swap of two numbers :\n-------------------------" << std::endl;
	std::cout << "Input 1st number: ";
	std::cin >> q13x;
	std::cout << "Input 2nd number: ";
	std::cin >> q13y;
	temp = q13x;
	q13x = q13y;
	q13y = temp;
	std::cout << "After swapping the 1st number is: " << q13x << std::endl;
	std::cout << "After swapping the 2nd number is: " << q13y << std::endl;
	std::cout << std::endl;

	//q14
	const double PI = 3.14159265;
	double rad, vol;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Calculate the volume of a sphere:\n------------------------" << std::endl;
	std::cout << "Enter radius of sphere: ";
	std::cin >> rad;
	vol = 4.0 / 3 * PI * pow(rad, 3);
	std::cout << "The volume of a sphere is: " << vol << std::endl;
	std::cout << std::endl;

	//q15
	double q15;
	std::cout << "Calculate the volume of a cube:\n------------------------" << std::endl;
	std::cout << "Enter length: ";
	std::cin >> q15;
	vol = pow(q15, 3);
	std::cout << "The volume of a cube is: " << vol << std::endl;
	std::cout << std::endl;

	//q16
	double q16r, q16h;
	std::cout << "Calculate the volume of a cylinder:\n------------------------" << std::endl;
	std::cout << "Enter radius of cylinder: ";
	std::cin >> q16r;
	std::cout << "Enter height of cylinder: ";
	std::cin >> q16h;
	vol = PI * pow(q16r, 2) * q16h;
	std::cout << "The volume of a cylinder is: " << vol << std::endl;
	std::cout << std::endl;

	return 0;
}