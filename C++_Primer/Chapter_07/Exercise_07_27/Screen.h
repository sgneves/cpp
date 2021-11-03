#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>
using std::ostream;
using std::string;

class Screen {
public:
    typedef string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w, char c): height(h), width(w), contents(h * w, c) { }

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r * width + c]; };
    Screen &set(char ch) { contents[cursor] = ch; return *this; }
    Screen &set(pos r, pos c, char ch) { contents[r * width + c] = ch; return *this; }
    Screen &move(pos r, pos c) { cursor = r * width + c; return *this; }
    Screen &display(ostream &os) { display_aux(os); return *this; }
    const Screen &display(ostream &os) const { display(os); return *this; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

    void display_aux(ostream&) const;
};
#endif
