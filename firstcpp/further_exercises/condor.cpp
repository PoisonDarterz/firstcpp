#include <iostream>
#include <string>
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

double* maximum(double* a, int size) { //q7
	double max = a[0];
	if (size == 0) {
		return NULL;
	}
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	double* ptr = &max;
	return ptr;
}

int myStrLen(char* sentence) { //q8
	int arrLength = 0;

	while (sentence[arrLength] != 0) {
		arrLength++;
	}	

	return arrLength;
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
	int ar6[5] = { 12,456,3,34,56 };
	int* ptr6 = &ar6[0];
	length = sizeof(ar6) / sizeof(int);
	std::cout << "The number of even numbers in array is: " << countEven(ptr6, length) << std::endl;
	std::cout << std::endl;

	//q7
	double ar7[5] = { 12,456,3,34,56 };
	double* ptr7 = &ar7[0];
	length = sizeof(ar7) / sizeof(double);
	double* ptrmax = maximum(ptr7, length);
	std::cout << *ptrmax << std::endl;
	std::cout << std::endl;

	//q8
	std::cout << "Enter a sentence less than 100 characters long: " << std::endl;
	char* sentence = new char;
	std::cin.getline(sentence,100);
	int size = myStrLen(sentence);
	std::cout << "Length of sentence: " << size << std::endl;
	std::cout << std::endl;
	
	return 0;
}

