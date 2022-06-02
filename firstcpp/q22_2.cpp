#include <iostream>
#include <iomanip>
#include <string>

    int q22_2() {
        //q22_2
        std::cout << "q22_2" << std::endl;
        std::cout << "Enter temperature in Celsius: ";
        double celsius;
        std::cin >> celsius;
        double fahren = celsius * 9 / 5 + 32;
        std::cout << "Value of temperature in Fahrenheit is: " << fahren << " Fahrenheit";
        return 0;
    }