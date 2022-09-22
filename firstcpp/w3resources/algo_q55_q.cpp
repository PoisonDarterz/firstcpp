#include <iostream>
#include <iomanip>
#include <cmath>

int main() { //main
	//q55
	int q55a, q55b;
	std::cout << "Enter 2 numbers separated by space: " << std::endl;
	std::cin >> q55a >> q55b;
	int q55, q55af, q55bf;
	
	q55a > 13 ? q55af = 0 : q55af = q55a;
	q55b > 13 ? q55bf = 0 : q55bf = q55b;
	q55af > q55bf ? q55 = q55af : q55 = q55bf;
	
	std::cout << q55 << std::endl;
	std::cout << std::endl;
		
	
}