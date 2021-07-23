// Ex 5.25 - Based on 5.23 but uses a try block to catch the exception.
#include <iostream>
#include <stdexcept>
using std::endl;
using std::cin;
using std::cout;

int main()
{
    char rsp;
    int i1, i2;

    cout << "Enter two integers:" << endl;

    while (cin >> i1 >> i2) {
        try {
            if (i2 == 0)
                throw std::runtime_error("Second integer cannot be zero.");

            cout << "The division of " << i1 << " by " << i2 << " is " << i1 / i2 << endl;
        }
        catch (std::runtime_error err) {
            cout << err.what() << "\nTry again?" << endl;
            if (cin >> rsp && toupper(rsp) != 'Y')
                break;
        }
    }
    return 0;
}
