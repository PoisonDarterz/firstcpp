#include <iostream>

int main() { //main
	int n = 0;
	int sum = 0;
	while (n < 1) {
		std::cout << "Enter a positive number: ";
		std::cin >> n;
	}
	
	for (int i = 1; i <= n; i+=2) {
		sum += i;
	}
	std::cout << "The sum of numbers between 1 to n is: " << sum << std::endl;
	
	return 0;
}