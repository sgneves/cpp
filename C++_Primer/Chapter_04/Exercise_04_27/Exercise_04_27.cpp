// Ex 4.27 - Bitwise operators.
#include <iostream>
using std::endl;
using std::cout;

int main()
{
    unsigned long ul1 = 3, ul2 = 7;

    cout << (ul1 & ul2) << endl;
    cout << (ul1 | ul2) << endl;
    cout << (ul1 && ul2) << endl;
    cout << (ul1 || ul2) << endl;

    return 0;
}
