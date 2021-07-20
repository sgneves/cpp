// Ex 3.22 - Copying arrays.
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1(10), v2;

    for (int i = 0; i < 10; ++i)
        v1[i] = i;

    v2 = v1;

    for (int i : v2)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
