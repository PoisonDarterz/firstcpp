#include <iostream>
#include <iomanip>
#include <string>

    int main()
    {
        //q22_4
        std::cout << "q22_4" << std::endl;
        int array[3];
        int arraysize = sizeof(array) / sizeof(int);
        for (int j = 0; j < 3; j++) {
            std::cout << "Input numbers " << (j + 1) << ":";
            std::cin >> array[j];
        }
        double total = 0.0;
        for (int i = 0; i < arraysize; i++) {
            total = total + array[i];
        }
        double avg = total / arraysize;
        std::cout << "The average value is: " << avg;
        return 0;
    }

