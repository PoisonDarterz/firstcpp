#include <iostream>

int* getInput(int* nums) {
	for (int i = 0; i < 2; i++) {
		std::cout << "Enter integer number: ";
		std::cin >> nums[i];
	}
	return nums;
}

int getSum(int* nums) {
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		sum = sum + nums[i];
	}
	return sum;
}

void output(int sum) {
	std::cout << "The sum of the 2 integer is: " << sum;
}

int q71_1() {
	int* nums = new int[2];
	nums = getInput(nums);
	int sum = getSum(nums);
	output(sum);
	return 0;
}