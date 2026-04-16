#include <iostream>
#include <cstdint>
#include <string>

void readStudentData(std::string& name, int& homework, int& midterm, int& finalExam){
    std::cout << ("Enter student name: ");
    std::getline(std::cin, name);
    std::cout << ("Type in the following scores of the student");
    std::cout << std::endl << ("Homework score: ");
    std::cin >> homework;
    while (true){
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << ("invalid score.");
            std::cout << std::endl << ("Homework score: ");
            std::cin >> homework;
            continue;
        }
        if (0 > homework || homework > 100){
            std::cout << ("invalid score.");
            std::cin >> homework;
            continue;
        }
        break;
    }
    std::cout << std::endl << ("Midterm score: ");
    std::cin >> midterm;
    while (true){
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << ("invalid score.");
            std::cout << std::endl << ("Homework score: ");
            std::cin >> midterm;
            continue;
        }
        if (0 > midterm || midterm > 100){
            std::cout << ("invalid score.");
            std::cin >> midterm;
            continue;
        }
        break;
    }
    std::cout << std::endl << ("Final exam score: ");
    std::cin >> finalExam;
    while (true){
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << ("invalid score.");
            std::cout << std::endl << ("Homework score: ");
            std::cin >> finalExam;
            continue;
        }
        if (0 > finalExam || finalExam > 100){
            std::cout << ("invalid score.");
            std::cin >> finalExam;
            continue;
        }
        break;
    }
    std::cout << homework << (" ") << midterm << (" ") << finalExam;
}

int main(){
    std::string name;
    int homework;
    int midterm;
    int finalExam;
    readStudentData(name, homework, midterm, finalExam);
    return 0;
}


//noch zu viel code und while schleifen schlecht
//viele wiederholungen