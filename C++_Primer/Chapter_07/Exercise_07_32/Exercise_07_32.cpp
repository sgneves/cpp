// Ex 7.32 - Class Window_mgr to represent a window manager of Screens on a given display.
#include <iostream>
#include "Screen.h"
using std::cout;
using std::endl;

int main()
{
    Screen screen(3, 5, '-');
    Window_mgr window_mgr;
    Window_mgr::ScreenIndex i;

    i = window_mgr.add(screen);
    window_mgr.display(i);

    window_mgr.clear(i);
    window_mgr.display(i);

    return 0;
}
