// Ex 5.24 - Based on 5.23 but throws an exception.
#include <iostream>
#include <stdexcept>

int main()
{
    int i1, i2;

    std::cout << "Enter two integers:" << std::endl;
    std::cin >> i1 >> i2;
    if (i2 == 0)
        throw std::runtime_error("Second integer cannot be zero");

    std::cout << "The division of " << i1 << " by " << i2 << " is " << i1 / i2 << std::endl;

    return 0;
}
