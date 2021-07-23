// Ex 5.12 - Reads text from cin and counts the number of vowels, blank spaces, tabs, newlines and
// two-character sequences ff, fl, fi.
#include <cctype>
#include <iostream>
#include <string>
using std::endl;

int main()
{
    char prev = '\0', next;
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;
    int space_cnt = 0, tab_cnt = 0, newline_cnt = 0;
    int ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;

    // Count the number of vowels
    while (std::cin >> std::noskipws >> next)
    {
        switch (tolower(next)) {
        case 'a':
            a_cnt++;
            break;
        case 'e':
            ++e_cnt;
            break;
        case 'i':
            ++i_cnt;
            if (prev == 'f')
                ++fi_cnt;
            break;
        case 'o':
            ++o_cnt;
            break;
        case 'u':
            ++u_cnt;
            break;
        case ' ':
            ++space_cnt;
            break;
        case '\t':
            ++tab_cnt;
            break;
        case '\n':
            ++newline_cnt;
            break;
        case 'f':
            if (prev == 'f')
                ++ff_cnt;
            break;
        case 'l':
            if (prev == 'f')
                ++fl_cnt;
            break;
        }
        prev = next;
    }

    // Print results
    std::cout << "Vowel a: " << a_cnt << endl
              << "Vowel e: " << e_cnt << endl
              << "Vowel i: " << i_cnt << endl
              << "Vowel o: " << o_cnt << endl
              << "Vowel u: " << u_cnt << endl
              << "Space: " << space_cnt << endl
              << "Tab: " << tab_cnt << endl
              << "newline: " << newline_cnt << endl
              << "ff: " << ff_cnt << endl
              << "fi: " << fi_cnt << endl
              << "fl: " << fl_cnt << endl;

    return 0;
}
