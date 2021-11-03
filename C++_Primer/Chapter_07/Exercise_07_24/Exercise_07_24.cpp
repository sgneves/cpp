// Ex 7.24 - Class Screen to represent a window on a display.
#include <iostream>
#include "Screen.h"
using std::cout;
using std::endl;

int main()
{
    Screen screen_1;
    Screen screen_2(3, 5, 'a');

    cout << screen_2.get() << endl;
    cout << screen_2.get(1, 2) << endl;

    return 0;
}
