// Ex 6.22 - Swaps the values of two int pointers.
#include <iostream>

void swap(int **ppi1, int **ppi2) {
    int *temp = *ppi1;
    *ppi1 = *ppi2;
    *ppi2 = temp;
}

int main()
{
    int i1 = 1, i2 = 2, *pi1 = &i1, *pi2 = &i2;

    swap(&pi1, &pi2);
    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "i2 = " << i2 << std::endl;
    std::cout << "*pi1 = " << *pi1 << std::endl;
    std::cout << "*pi2 = " << *pi2 << std::endl;

    return 0;
}
