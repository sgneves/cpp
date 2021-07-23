// Ex 5.14 - Reads strings from standard input and looks for duplicated words.
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{
    int count = 0, count_max = 0;
    std::string curr, prev, repeated;

    while (std::cin >> curr)
    {
        if (curr != prev)
            count = 1;
        else
        {
            ++count;

            if (count > count_max)
            {
                count_max = count;
                repeated = curr;
            }
        }
        prev = curr;
    }

    if (count_max > 1)
        cout << "The word " << repeated << " occurred " << count_max << " times" << endl;
    else
        cout << "No word was repeated" << endl;

    return 0;
}
