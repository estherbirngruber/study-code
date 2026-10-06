#include <iostream>
#include <vector>

int main ()
{
std::vector <std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print vector elements
for (std::string car : cars) {
  std::cout << car << "\n";
}
}