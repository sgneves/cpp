// Ex 3.40 - Concatenates two C-style character strings.
#include <cstring>
#include <iostream>

int main()
{
    char s1[] = "abc";
    char s2[] = "def";
    char s3[7];

    strcpy(s3, s1);
    strcat(s3, s2);
    std::cout << s3 << std::endl;

    return 0;
}
