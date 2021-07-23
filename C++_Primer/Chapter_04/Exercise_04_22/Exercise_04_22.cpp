// Ex 4.22 - Indicates whether a grade is a high pass, pass, low pass or fail.
#include <iostream>
#include <string>
#include <vector>
using std::endl;
using std::cout;

int main()
{
    std::string classification;
    std::vector<int> grades{91, 76, 75, 60, 59};

    for (auto &grade : grades)
    {
        classification = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 59) ? "low pass" : "fail";
        classification = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 59) ? "low pass" : "fail";
        cout << grade << " is " << classification << endl;
    }

    cout << endl;

    for (auto &grade : grades)
    {
        if (grade > 90)
            classification = "high pass";
        else if (grade > 75)
            classification = "pass";
        else if (grade > 59)
            classification = "low pass";
        else
            classification = "fail";

        cout << grade << " is " << classification << endl;
    }

    return 0;
}
