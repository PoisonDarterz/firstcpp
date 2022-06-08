#include <iostream>
#include <iomanip>

int q22_2() {
    std::cout << "Enter temperature in Celsius: ";
        double celsius;
    std::cin >> celsius;
        double fahren = celsius * 9 / 5 + 32;
    std::cout << "Value of temperature in Fahrenheit is: " << std::fixed << std::setprecision(2) << fahren << " Fahrenheit";
    return 0;
}