// Ex 6.10 - Swaps the values of two ints.
#include <iostream>

void swap(int *i1, int *i2) {
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}

int main()
{
    int i1 = 1, i2 = 2;

    swap(&i1, &i2);
    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "i2 = " << i2 << std::endl;

    return 0;
}
