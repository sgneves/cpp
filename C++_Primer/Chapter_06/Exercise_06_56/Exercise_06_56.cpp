// Ex 6.55 - Pointers to functions.
#include <iostream>
#include <vector>

int sum(int i1, int i2) {
    return i1 + i2;
}

int subtract(int i1, int i2) {
    return i1 - i2;
}

int multiply(int i1, int i2) {
    return i1 * i2;
}

int divide(int i1, int i2) {
    return i1 / i2;
}

int main()
{
    typedef decltype(sum)* pf;
    int i1 = 4, i2 = 2;
    std::vector<pf> v = {sum, subtract, multiply, divide};

    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "i2 = " << i2 << std::endl;
    std::cout << "i1 + i2 = " << v[0](i1, i2) << std::endl;
    std::cout << "i1 - i2 = " << v[1](i1, i2) << std::endl;
    std::cout << "i1 * i2 = " << v[2](i1, i2) << std::endl;
    std::cout << "i1 / i2 = " << v[3](i1, i2) << std::endl;

    return 0;
}
