#include <vector>
#include <Windows.h>
#include <iostream>

std::vector<int> gs_numbers;

/*int cumulate()
{
    int cumsum = 0;
    for (size_t i=0; i < gs_numbers.size(); i++)
    {
        cumsum += gs_numbers[i];
        Sleep(5);
    }
    gs_numbers.clear();
    return cumsum;
}*/

int cumulate()
{
    int& first = gs_numbers[0];
    for (int i = 0; i < 1000; i++)
        gs_numbers.push_back(i);   // Vektor wächst, alter Speicher wird freigegeben
    return first;                  // dangling: zeigt auf freigegebenen Speicher
}

int main()
{
    gs_numbers = {1, 2, 3, 4, 5};
    std::cout << cumulate() << std::endl;
    return 0;
}