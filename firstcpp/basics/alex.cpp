#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//
//void spellingcheck(char* guess)
//{
//	const char* head = "head";
//	const char* tail = "tail";
//	//const char *guess;
//
//	while ((strcmp(guess, head) != 0) && (strcmp(guess, tail) != 0))
//	{
//		cout << "invalid guess , please guess again : ";
//		cin.getline(guess, 100);
//	}
//
//}
//int main()
//{
//	char* guess = new char;
//	cout << "Guess head or tail : ";
//	cin.getline(guess, 100);
//
//	spellingcheck(guess);
//}


void spellingcheck() {
	const char* head = "head";
	const char* tail = "tail";
	char* guess = new char;

	cout << "Guess head or tail : ";
	do {
		cin.getline(guess, 100);
		if ((strcmp(guess, head) != 0) && (strcmp(guess, tail) != 0)) {
			cout << "invalid guess , please guess again : ";
		}
	} while ((strcmp(guess, head) != 0) && (strcmp(guess, tail) != 0));

}

int main() {
	spellingcheck();
}
