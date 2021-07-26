// Ex 6.54 - Pointers to functions.
#include <iostream>
#include <vector>

int sum(int i1, int i2) {
    return i1 + i2;
}

int main()
{
    typedef decltype(sum)* pf;
    std::vector<pf> v = {sum};

    std::cout << v[0](1, 2) << std::endl;

    return 0;
}
