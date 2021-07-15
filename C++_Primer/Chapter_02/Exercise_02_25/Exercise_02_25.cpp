#include <iostream>

int main()
{
    int *ip = nullptr, *&r = ip;

    std::cout << ip << " " << r << std::endl;

    return 0;
}
