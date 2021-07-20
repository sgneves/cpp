// Ex 3.26 - Compares two arrays for equality and two vectors for equality.
#include <cstring>
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{
    char s1[] = "abc";
    char s2[] = "abc";
    std::string s3("abc");
    std::string s4("abc");

    int result = strcmp(s1, s2);

    if (result < 0)
        cout << "s1 < s2" << endl;
    else if (result == 0)
        cout << "s1 == s2" << endl;
    else
        cout << "s1 > s2" << endl;

    if (s3 < s4)
        cout << "s3 < s4" << endl;
    else if (s3 == s4)
        cout << "s3 == s4" << endl;
    else
        cout << "s3 > s4" << endl;

    return 0;
}
