#include <iostream>
#include <string>
#include "Screen.h"
#include "Window_mgr.h"

// Adds a screen to the window and returns its index
Window_mgr::ScreenIndex Window_mgr::add(const Screen &screen)
{
    screens.push_back(screen);
    return screens.size() - 1;
}

// Displays the screen at the given position
void Window_mgr::display(ScreenIndex i)
{
    screens[i].display(std::cout);
}

// Resets the screen at the given position to all blanks
void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}
