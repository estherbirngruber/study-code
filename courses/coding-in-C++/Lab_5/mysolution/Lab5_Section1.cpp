#include <iostream>
#include <iomanip>

template <typename T, typename U>
void tausche(T& a, U& b){
    T temp = a;
    a = b;
    b = temp;
}

int main (){
    double x = 2;
    int y = 4;

    std::cout << x << std::setw(5) << " " << y << "\n";

    tausche(x, y);

    std::cout << x << std::setw(5) << " " << y;
}