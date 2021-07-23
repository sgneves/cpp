// Ex Ex 5.19 - Repetitively request two strings from the user and reports which string is less
// than the other.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s1, s2;

    do {
        cout << "Enter two strings:" << endl;
        cin >> s1 >> s2;

        cout << ((s1 > s2) ? "s1 > s2" : (s1 == s2) ? "s1 == s2" : "s1 < s2") << endl;

    } while (cin);

    return 0;
}
