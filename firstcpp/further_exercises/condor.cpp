#include <iostream>
//link: https://condor.depaul.edu/ntomuro/courses/309/notes/pointer_exercises.html

int countEven(int* arr, int n) { //q6
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			++count;
		}
	}
	return count;
}

int condor() { //main
	//q5
	char s[10] = "abcde";
	char* cptr;
	int length = sizeof(s) / sizeof(s[0]);

	for (int i = length-1; i >= 0; i--) {
		std::cout << s[i];
	}
	std::cout << std::endl;

	//q6
	int ar[5] = { 123,45,3,34,56 };
	int* ptr6 = &ar[0];
	length = sizeof(ar) / sizeof(int);
	std::cout << "The number of even numbers in array is: " << countEven(ptr6, length) << std::endl;
	std::cout << std::endl;

	//q7

	return 0;
}

