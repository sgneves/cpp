// Ex 7.27 - Added the move, set and display members to the Screen class defined in Ex 7.24.
#include <iostream>
#include "Screen.h"

int main()
{
    Screen screen(3, 5, '-');
    screen.move(1,2).set('O').display(std::cout);

    return 0;
}
