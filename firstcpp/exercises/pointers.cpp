#include <iostream>

void ptrexer1(int a, int b) {
	int* ptrA = &a;
	int* ptrB = &b;

	std::cout << "The values of ptrA and ptrB are " << *ptrA << " and " << *ptrB << std::endl;
	std::cout << "The addresses of ptrA and ptrB are " << ptrA << " and " << ptrB << std::endl;
}

void ptrexer2(int* arr, int n){
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	int* addmax = &max;
	std::cout << "The maximum value is: " << max << " at address " << addmax << std::endl;
}

int pointer() { //main
	std::cout << "Enter 2 integers seperated by a space: " << std::endl;
	int ptrx, ptry;
	std::cin >> ptrx >> ptry;
	ptrexer1(ptrx, ptry);

	std::cout << "Enter number of values: ";
	int n;
	std::cin >> n;
	int* ptrarr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cout << "Enter an integer: ";
		std::cin >> ptrarr[i];
	}
	ptrexer2(ptrarr, n);

	return 0;
}