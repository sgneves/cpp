// Ex 6.21 - Calculates the maximum of two ints.
#include <iostream>

int max(int i1, int *i2) {
    if (i1 >= *i2)
        return i1;
    else
        return *i2;
}

int main()
{
    int i = 4;

    std::cout << "The maximum of 8 and 4 is " << max(8, &i) << std::endl;
    std::cout << "The maximum of 2 and 4 is " << max(2, &i) << std::endl;

    return 0;
}
