#include <iostream>
#include <cstdint>
// #include <string>

void readStudentData(std::string name, std::uint8_t homework, std::uint8_t midterm, std::uint8_t finalExam){
    std::cout << ("Enter student name: ");
    std::getline(std::cin, name);
    std::cout << ("Type in the following scores of the student");
    std::cout << std::endl << ("Homework score: ");
    std::cin >> homework;
    std::cout << std::endl << ("Midterm score: ");
    std::cin >> midterm;
    std::cout << std::endl << ("Final exam score: ");
    std::cin >> finalExam;

    bool 
    return;
}

int main(){
    readStudentData(std::string name, std::uint8_t homework, std::uint8_t midterm, std::uint8_t finalExam);
    return;
}