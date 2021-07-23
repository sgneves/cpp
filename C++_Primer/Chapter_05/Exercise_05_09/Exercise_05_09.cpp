// Ex 5.9 - Reads text from cin and counts the number of vowels.
#include <iostream>

int main()
{
    char ch;
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;

    // Count the number of vowels
    while (std::cin >> ch)
        if (ch == 'a')
            ++a_cnt;
        else if (ch == 'e')
            ++e_cnt;
        else if (ch == 'i')
            ++i_cnt;
        else if (ch == 'o')
            ++o_cnt;
        else if (ch == 'u')
            ++u_cnt;

    // Print results
    std::cout << "Vowel a: " << a_cnt << '\n'
              << "Vowel e: " << e_cnt << '\n'
              << "Vowel i: " << i_cnt << '\n'
              << "Vowel o: " << o_cnt << '\n'
              << "Vowel u: " << u_cnt << std::endl;

    return 0;
}
