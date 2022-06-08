#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	//q30
	double q30a, q30b, q30c, q30d, q30x, q30y;
	std::cout << "Input 2 numbers seperated by space: ";
	std::cin >> q30a >> q30b;
	std::cout << "Input 2 numbers seperated by space: ";
	std::cin >> q30c >> q30d;

	q30x = q30a + q30b + q30c + q30d;
	q30y = q30x / 4;
	std::cout << "The sum is: " << q30x << std::endl;
	std::cout << "The average is: " << q30y << std::endl;
	std::cout << std::endl;

	//q49
	char q49;
	std::cout << "Print ASCII value of a character." << std::endl;
	std::cout << "Input a character: ";
	std::cin >> q49;
	std::cout << "The ASCII value of the character " << q49 << " is " << (int)q49 << std::endl;
	std::cout << std::endl;

	//q63
	int size=0;
	while (size < 4) {
		std::cout << "Enter size of array (4 or more): ";
		std::cin >> size;
	}
	std::vector<int> q63;
	int element;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter element " << i << ": ";
		std::cin >> element;
		q63.push_back(element);
	}
	std::sort(q63.begin(), q63.end(), std::greater<int>());
	std::cout << "The 3 biggest elements are: " << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << q63[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//q69
	int q69;
	std::cout << "Input a number: ";
	std::cin >> q69;
	int fact = q69;
	for (int i = (q69-1); i >= 1; i--) {
		fact = fact * i;
	}
	std::cout << "The factorial of " << q69 << " is " << fact << std::endl;
	std::cout << std::endl;

	//array q7
	size = 0;
	while (size < 4) {
		std::cout << "Enter size of array (4 or more): ";
		std::cin >> size;
	}
	std::vector<int> qa7;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter element " << i << ": ";
		std::cin >> element;
		qa7.push_back(element);
	}
	int count, mode=0, maxcount = 0;
	for (int i = 0; i < size; i++) {
		count = 1;
			for (int j = i + 1; j < size; j++) {
				if (qa7[i] == qa7[j]) {
					count++;
				}
			}
		if (count > maxcount) {
			maxcount = count;
			mode = qa7[i];
		}
	}
	std::cout << "The mode is: " << mode << std::endl;
	std::cout << std::endl;

	return 0;
}