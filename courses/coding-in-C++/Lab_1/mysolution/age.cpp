#include <iostream>
#include <cstdint>

namespace validation {
    bool isAdult(unsigned int age){
        if (age >= 18){
            return true;
        }else{
            return false;
        }
    }
    bool isSenior(unsigned int age){
        if (age >= 65){
            return true;
        }else{
            return false;
        }
    }
}

int main (){
    unsigned int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    while (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "invalid number, please enter your age: ";
        std::cin >> age;
    }
    while (age < 0 || age >120){
        std::cout << "impossible age, please enter your age: ";
        std::cin >> age;
    }
    std::cout << "You are " <<age << " years old." << std::endl;
    if (validation::isSenior(age)){
        std::cout << "That means you are a senior citizen.";
    } else if (validation::isAdult(age))
    {
        std::cout << "That means you are an adult.";
    } else
    {
        std::cout << "That means you are still a kid or a teenager.";
    }
    
    return 0;
}

//What exactly is the problem when using __uint8_t__ for storing the entered age of the user?
//uint8_t steht meist für unsigned char. Cin behandelt die eingabe wie ein ASCII Zeichen

//Which other portable data types would make sense in this example?
//int and unsigned int