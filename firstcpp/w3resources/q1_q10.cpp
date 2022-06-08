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

    return 0;
}
