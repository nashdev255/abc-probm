#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

class Coord {
    private:
        int x, y;
    public:
        Coord(int a=0, int b=0) : x(a), y(b) {}
        friend std::ostream& operator<<(std::ostream& os, const Coord& c);
};

std::ostream& operator<<(std::ostream& os, const Coord& c) {
    os << '(' << c.x << ',' << c.y << ')';
    return os;
}

#endif // MYLIB_H
