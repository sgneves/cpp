// Ex 6.5 - Calculates the absolute value of a given number.
#include <iostream>

int abs(int n)
{
    if (n < 0)
        n = -n;
    return n;
}

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Absolute value of " << n << " is " << abs(n) << std::endl;

    return 0;
}
