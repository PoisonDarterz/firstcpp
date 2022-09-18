#include <iostream>
#include <iomanip>

int q1_q10()
{
    //q1
    std::cout << "Hello World!\nWelcome to the project.";
    std::cout << std::endl;

    //q2,q4
    std::cout << "Print the sum of two numbers :\n------------------------" << std::endl;
    int q2 = 29, q4 = 30;
    int sum = q2 + q4;
    std::cout << "The sum of 29 and 30 is: " << sum;
    std::cout << std::endl;

    //q3
    std::cout << "Size of fundamental datatypes :\n------------------------" << std::endl;
    std::cout << "The sizeof(char) is:          " << sizeof(char) << "bytes" << std::endl;
    std::cout << "The sizeof(short) is:         " << sizeof(short) << "bytes" << std::endl;
    std::cout << "The sizeof(int) is:           " << sizeof(int) << "bytes" << std::endl;
    std::cout << "The sizeof(long) is:          " << sizeof(long) << "bytes" << std::endl;
    std::cout << "The sizeof(long long) is:     " << sizeof(long long) << "bytes" << std::endl;
    std::cout << "The sizeof(float) is:         " << sizeof(float) << "bytes" << std::endl;
    std::cout << "The sizeof(double) is:        " << sizeof(double) << "bytes" << std::endl;
    std::cout << "The sizeof(long double) is:   " << sizeof(long double) << "bytes" << std::endl;
    std::cout << "The sizeof(bool) is:          " << sizeof(bool) << "bytes" << std::endl;
    std::cout << std::endl;

    //q5
    std::cout << "Check the upper and lower limits of integer :" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "The maximum limit of int data type :                  " << INT_MAX << std::endl;
    std::cout << "The minimum limit of int data type :                  " << INT_MIN << std::endl;
    std::cout << "The maximum limit of unsigned int data type :         " << UINT_MAX << std::endl;
    std::cout << "The maximum limit of long long data type :            " << LLONG_MAX << std::endl;
    std::cout << "The minimum limit of long long data type :            " << LLONG_MIN << std::endl;
    std::cout << "The maximum limit of unsigned long long data type :   " << ULLONG_MAX << std::endl;
    std::cout << "The Bits contain in char data type :                  " << CHAR_BIT << std::endl;
    std::cout << "The maximum limit of char data type :                 " << CHAR_MAX << std::endl;
    std::cout << "The minimum limit of char data type :                 " << CHAR_MIN << std::endl;
    std::cout << "The maximum limit of signed char data type :          " << SCHAR_MAX << std::endl;
    std::cout << "The minimum limit of signed char data type :          " << SCHAR_MIN << std::endl;
    std::cout << "The maximum limit of unsigned char data type :        " << UCHAR_MAX << std::endl;
    std::cout << "The minimum limit of short data type :                " << SHRT_MIN << std::endl;
    std::cout << "The maximum limit of short data type :                " << SHRT_MAX << std::endl;
    std::cout << "The maximum limit of unsigned short data type :       " << USHRT_MAX << std::endl;
    std::cout << std::endl;

    //q7
    int q7a = 5, q7b = 7;
    double q7c = 3.7, q7d = 8.0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Display arithmetic opetarion with mixed datatype:\n--------------------------------- " << std::endl;
    std::cout << q7a << " + " << q7b << " = " << q7a + q7b << std::endl;
    std::cout << q7c << " + " << q7d << " = " << q7c + q7d << std::endl;
    std::cout << q7a << " + " << q7d << " = " << q7a + q7d << std::endl;
    std::cout << q7a << " - " << q7b << " = " << q7a - q7b << std::endl;
    std::cout << q7c << " - " << q7d << " = " << q7c - q7d << std::endl;
    std::cout << q7a << " - " << q7d << " = " << q7a - q7d << std::endl;
    std::cout << q7a << " * " << q7b << " = " << q7a * q7b << std::endl;
    std::cout << q7c << " * " << q7d << " = " << q7c * q7d << std::endl;
    std::cout << q7a << " * " << q7d << " = " << q7a * q7d << std::endl;
    std::cout << q7a << " / " << q7b << " = " << q7a / q7b << std::endl;
    std::cout << q7c << " / " << q7d << " = " << q7c / q7d << std::endl;
    std::cout << q7a << " / " << q7d << " = " << q7a / q7d << std::endl;
    std::cout << std::endl;

    //q8
    int maxint = INT_MAX, minint = INT_MIN;
    std::cout << maxint + 1 << "\t" << minint - 1 << std::endl;
    std::cout << std::endl;

    //q9
    int q9 = 57;
    q9++;
    std::cout << q9;
    ++q9;
    std::cout << "\t" << q9;
    q9 = q9 + 1;
    std::cout << "\t" << q9 << std::endl;
    q9--;
    std::cout << q9;
    --q9;
    std::cout << "\t" << q9;
    q9 = q9 - 1;
    std::cout << "\t" << q9;
    std::cout << std::endl;

    //q10
    const double PI = 3.1416;
    std::cout << "The value of pi 4dp of width 8: |" << std::setw(8) << PI << "|" << std::endl;
    std::cout << "The value of pi 4dp of width 10: |" << std::setw(10) << PI << "|" << std::endl;
    std::cout << std::setfill('-');
    std::cout << "The value of pi 4dp of width 8: |" << std::setw(8) << PI << "|" << std::endl;
    std::cout << "The value of pi 4dp of width 10: |" << std::setw(10) << PI << "|" << std::endl;
    std::scientific;
    std::cout << "The value of pi in scientific format: " << PI <<std::endl;
    bool status = 0;
    std::cout << "status in number: " << status << std::endl;
    std::cout << "status in alphabet: " << std::boolalpha << status << std::endl;
    std::cout << std::endl;
	
    int q12x, q12y;
    std::cout << "Sum of two numbers :\n-------------------------" << std::endl;
    std::cout << "Input 1st number: ";
    std::cin >> q12x;
    std::cout << "Input 2nd number: ";
    std::cin >> q12y;
    int q12sum = q12x + q12y;
    std::cout << "The sum is: " << q12sum << std::endl;
    std::cout << std::endl;

    //q13
    int q13x, q13y, temp;
    std::cout << "Swap of two numbers :\n-------------------------" << std::endl;
    std::cout << "Input 1st number: ";
    std::cin >> q13x;
    std::cout << "Input 2nd number: ";
    std::cin >> q13y;
    temp = q13x;
    q13x = q13y;
    q13y = temp;
    std::cout << "After swapping the 1st number is: " << q13x << std::endl;
    std::cout << "After swapping the 2nd number is: " << q13y << std::endl;
    std::cout << std::endl;

    //q14
    const double q14PI = 3.14159265;
    double rad, vol;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Calculate the volume of a sphere:\n------------------------" << std::endl;
    std::cout << "Enter radius of sphere: ";
    std::cin >> rad;
    vol = 4.0 / 3 * q14PI * pow(rad, 3);
    std::cout << "The volume of a sphere is: " << vol << std::endl;
    std::cout << std::endl;

    //q15
    double q15;
    std::cout << "Calculate the volume of a cube:\n------------------------" << std::endl;
    std::cout << "Enter length: ";
    std::cin >> q15;
    vol = pow(q15, 3);
    std::cout << "The volume of a cube is: " << vol << std::endl;
    std::cout << std::endl;

    //q16
    double q16r, q16h;
    std::cout << "Calculate the volume of a cylinder:\n------------------------" << std::endl;
    std::cout << "Enter radius of cylinder: ";
    std::cin >> q16r;
    std::cout << "Enter height of cylinder: ";
    std::cin >> q16h;
    vol = PI * pow(q16r, 2) * q16h;
    std::cout << "The volume of a cylinder is: " << vol << std::endl;
    std::cout << std::endl;

    return 0;
}
