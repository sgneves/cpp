// Ex 6.3 - Calculates the factorial of a given number.
#include <iostream>

int main()
{
    int fact = 1, n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 2; i <= n; ++i)
        fact *= i;

    std::cout << "Factorial of " << n << " is " << fact << std::endl;

    return 0;
}
