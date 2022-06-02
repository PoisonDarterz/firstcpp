#include <iostream>
#include <iomanip>
#include <string>

int q22_4() {
    double array[3];
    double arraysize = sizeof(array) / sizeof(double);

        for (int j = 0; j < 3; j++) {
            std::cout << "Input numbers " << (j + 1) << ":";
            std::cin >> array[j];
        }

    double total = 0.0;

        for (int i = 0; i < arraysize; i++) {
            total = total + array[i];
        }

    double avg = total / arraysize;
    std::cout << "The average value is: " << std::fixed << std::setprecision(2) << avg;
    return 0;
}

