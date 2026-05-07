#include <iostream>
#include <cmath>

class Vector2D {
    private:
    double x;
    double y;
    public:
    Vector2D() : x(0.0), y(0.0) {}
    Vector2D(double x, double y) : x(x), y(y)   {}

    double getX () const {return x;}
    double getY () const {return y;}

    void print ()const
    {
        std::cout << '\n' << "(" << this->getX() << ", " << this->getY() << ")" << std::endl;
    }

    double getMagnitude () const {
        return sqrt((x*x)+(y*y));
    }

    double getMagnitude (int precision) const;
};


int main () {
    Vector2D vec1(4, 5);
    Vector2D vec2(1, 9);

    vec1.getMagnitude();
    vec1.getMagnitude(4);

    vec1.print();
    vec2.print();
}