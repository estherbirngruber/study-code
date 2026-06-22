#include <iostream>


template <typename T, typename U>
void print(T* array, U size){

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << "; ";
    }

}

int main (){
    std::string sensorFrames [4] = {"Hello", "I", "am", "here"};
    int arrayLength = sizeof(sensorFrames) / sizeof(sensorFrames[0]);
    print(sensorFrames, arrayLength);
}