#include <iostream>
#include "helloheader.hpp"

using namespace std;

void printFromHeader() {
    cout << "Hello from .hpp";
    return;
}

int main (){
    printFromHeader();
    return 0;
}