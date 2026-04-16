#include <iostream>
#include <cstdint>

void readStudentData(char name, int homework, int midterm, int finalExam){
    std::cout << ("type in the students' name: ");
    std::getline >> name;
    std::cout << ("Type in the following scores of the student") << std::endl;
    std::cout << std::endl << ("Homework score: ");
    std::cin >> homework;
    std::cout << std::endl << ("Midterm score: ");
    std::cin >> midterm;
    std::cout << std::endl << ("Final exam score: ");
    std::cin >> finalExam;
}

int main(){

}