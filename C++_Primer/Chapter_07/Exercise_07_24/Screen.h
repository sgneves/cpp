#ifndef SCREEN_H
#define SCREEN_H

#include <string>
using std::string;

class Screen {
public:
    typedef string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w, char c): height(h), width(w), contents(h * w, c) { }

    char get() const { return contents[cursor]; }
    char get(pos, pos) const;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

inline char Screen::get(pos r, pos c) const {
    return contents[r * width + c];
}
#endif
