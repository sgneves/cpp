// Ex 5.10 - Reads text from cin and counts the number of vowels.
#include <cctype>
#include <iostream>

int main()
{
    char ch;
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;

    // Count the number of vowels
    while (std::cin >> ch)
        switch (tolower(ch)) {
        case 'a':
            a_cnt++;
            break;
        case 'e':
            ++e_cnt;
            break;
        case 'i':
            ++i_cnt;
            break;
        case 'o':
            ++o_cnt;
            break;
        case 'u':
            ++u_cnt;
            break;
        }

    // Print results
    std::cout << "Vowel a: " << a_cnt << '\n'
        << "Vowel e: " << e_cnt << '\n'
        << "Vowel i: " << i_cnt << '\n'
        << "Vowel o: " << o_cnt << '\n'
        << "Vowel u: " << u_cnt << std::endl;

    return 0;
}
