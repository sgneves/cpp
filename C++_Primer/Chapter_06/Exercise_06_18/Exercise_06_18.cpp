// Ex 6.18 - Changes a string to all lowercase if it contains any capital letters.
#include <iostream>
#include <string>
using std::string;

bool has_upper(const string &s) {
    bool has_upper = false;
    for (auto ch : s)
        if (isupper(ch)) {
            has_upper = true;
            break;
        }
    return has_upper;
}

void to_lower(string &s) {
    for (auto &ch : s)
        ch = tolower(ch);
}

int main()
{
    string s = "Test";

    if (has_upper(s))
        to_lower(s);

    std::cout << s << std::endl;

    return 0;
}
