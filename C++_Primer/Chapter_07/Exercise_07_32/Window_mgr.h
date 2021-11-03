#ifndef WINDOW_MGR
#define WINDOW_MGR

#include <vector>

class Screen;

class Window_mgr {
public:
    // Location ID for each screen on the window
    using ScreenIndex = std::vector<Screen>::size_type;
    // Adds a screen to the window
    ScreenIndex add(const Screen&);
    // Displays the screen at the given position
    void display(ScreenIndex);
    // Resets the screen at the given position to all blanks
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens;
};
#endif
