#include <iostream>

class Point{
    int x,y;
public:
    Point() {
        x = 1;
        y = -1;
        std::cout << "Конструктор" << std::endl;
    }

    ~Point() {
        std::cout << "Деструктор" << std::endl;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

};

int main() {
        Point a, b, c, d, e;
        std::cout << c.getX() << std::endl;
        std::cout << c.getY() << std::endl;
    return 0;
}