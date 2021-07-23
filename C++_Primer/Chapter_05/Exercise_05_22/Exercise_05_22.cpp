// Ex 5.22 - Loop instead of goto.
#include <iostream>

int main()
{
    int a = -1;
    int b;

    while (b = a <= 0)
        std::cin >> a;

    return 0;
}
