// Ex 3.35 - Sets the elements in an array to zero using pointers.
#include <iostream>
#include <iterator>

int main()
{
    int v[5];

    for (int *p = v; p < std::end(v); ++p)
        *p = 0;

    for (int i : v)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
