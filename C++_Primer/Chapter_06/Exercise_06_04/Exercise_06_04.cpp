// Ex 6.4 - Based on Ex 6.3 but uses a function.
#include <iostream>

int fact(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; ++i)
        fact *= i;

    return fact;
}

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is " << fact(n) << std::endl;

    return 0;
}
