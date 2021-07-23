// Ex 5.6 - Generates a letter grade from a numeric grade.
#include <iostream>
#include <string>
#include <vector>
using std::string;

int main()
{
    int grades[] = {59, 60, 63, 67, 69, 70, 99, 100};
    string letter;
    std::vector<string> scores = {"D", "C", "B", "A"};

    for (int& grade : grades)
    {
        if (grade < 60)
            letter = 'F';
        else if (grade == 100)
            letter = "A++";
        else {
            letter = scores[(grade - 60) / 10];
            if (grade % 10 > 7)
                letter += '+';
            else if (grade % 10 < 3)
                letter += '-';
        }
        std::cout << grade << " -> " << letter << std::endl;
    }
    return 0;
}
