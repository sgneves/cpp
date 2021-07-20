// Ex 3.31 - Defines an array of ten ints and gives each element the same value as its position in
// the array.
#include <iostream>

int main()
{
    int v[10];

    for (int i = 0; i < 10; ++i)
        v[i] = i;

    for (int i : v)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
