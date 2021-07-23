// Ex 5.23 - Reads two integers and outputs their division.
#include <iostream>

int main()
{
    int i1, i2;

    std::cout << "Enter two integers:" << std::endl;
    std::cin >> i1 >> i2;
    std::cout << "The division of " << i1 << " by " << i2 << " is " << i1 / i2 << std::endl;

    return 0;
}
