// Ex 6.9 - Based on Ex 6.3 but uses a separate header and source file.
#include <iostream>
#include "..\Chapter_6.h"

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is " << fact(n) << std::endl;

    return 0;
}
