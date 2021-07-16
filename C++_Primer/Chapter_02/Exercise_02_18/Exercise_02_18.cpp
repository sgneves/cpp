// Ex 2.18 - Pointers.
#include <iostream>

int main()
{
    int i1 = 0, i2 = 5;
    int* pi = &i1;

    *pi = 1;
    std::cout << i1 << std::endl;

    pi = &i2;
    std::cout << *pi << std::endl;

    return 0;
}
