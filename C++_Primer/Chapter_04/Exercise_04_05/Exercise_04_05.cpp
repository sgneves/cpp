// Ex 4.5 - Precedence and associativity of arithmetic operators.
#include <iostream>
using std::endl;
using std::cout;

int main()
{
    cout << -30 * 3 + 21 / 5 << endl;
    cout << -30 + 3 * 21 / 5 << endl;
    cout << 30 / 3 * 21 % 5 << endl;
    cout << -30 / 3 * 21 % 4 << endl;

    return 0;
}
