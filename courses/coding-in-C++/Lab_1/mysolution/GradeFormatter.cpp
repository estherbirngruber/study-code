#include <iostream>
#include <cstdint>
#include <string>
#include <iomanip>

void rangeCheck (int& score){
    while (true){
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << ("Invalid input, try again:  ");
            std::cin >> score;
            continue;
        }
        if (0 > score || score > 100){
            std::cout << ("invalid score, try again:  ");
            std::cin >> score;
            continue;
        }
        break;
    }
}

void readStudentData(std::string& name, int& homework, int& midterm, int& finalExam, int& score){
    std::cout << ("Enter student name: ");
    std::cin >> std::ws;
    std::getline(std::cin, name);
    std::cout << ("Type in the following scores of the student");
    std::cout << std::endl << ("Homework score: ");
    std::cin >> score;
    rangeCheck(score);
    homework = score;
    std::cout << std::endl << ("Midterm score: ");
    std::cin >> score;
    rangeCheck(score);
    midterm = score;
    std::cout << std::endl << ("Final exam score: ");
    std::cin >> score;
    rangeCheck(score);
    finalExam = score;
}

void calculateGrade(int homework, int midterm, int finalExam, int& finalGrade, char& letterGrade){
    const float WEIGHT_HOMEWORK = 0.4;
    const float WEIGHT_MIDTERM = 0.25;
    const float WEIGHT_FINAL_EXAM = 0.35;

    finalGrade = (WEIGHT_HOMEWORK * homework) + (WEIGHT_MIDTERM * midterm) + (WEIGHT_FINAL_EXAM * finalExam);

    if (finalGrade >= 90){
        letterGrade = 'A';
    } else if (90 > finalGrade && finalGrade >= 80){
        letterGrade = 'B';
    } else if (80 > finalGrade && finalGrade >= 70){
        letterGrade = 'C';
    } else if (70 > finalGrade && finalGrade >= 60){
        letterGrade = 'D';
    } else if (60 > finalGrade && finalGrade >= 50){
        letterGrade = 'E';
    } else if (finalGrade < 50){
        letterGrade = 'F';
    }

}

void printReport (std::string name, int homework, int midterm, int finalExam, int finalGrade, char letterGrade){
    std::cout << std::endl << std::left << ("Student Report") << std::setw(40) << std::endl;
    std::cout << ("Name: ") << name;
    std::cout << std::endl << std::endl << std::left << ("Scores") << std::setw(15);
    std::cout << std::endl << std::left << std::setw(15) << ("Homework") << std::setw(5) << std::right << (": ") << homework;
    std::cout << std::endl << std::left << std::setw(15) << ("Midterm") << std::setw(5) << std::right << (": ") << midterm;
    std::cout << std::endl << std::left << std::setw(15) << ("Final Exam") << std::setw(5) << std::right << (": ") << finalExam;
    std::cout << std::endl << std::endl << std::left << std::setw(15) << ("Final Grade") << std::setw(5) << std::right << (": ") << finalGrade;
    std::cout << std::endl << std::left << std::setw(15) << ("Letter Grade") << std::setw(5) << std::right << (": ") << letterGrade;
}

int main(){
    std::string name;
    int homework;
    int midterm;
    int finalExam;
    int score;
    int finalGrade;
    char letterGrade;

    readStudentData(name, homework, midterm, finalExam, score);

    calculateGrade(homework, midterm, finalExam, finalGrade, letterGrade);

    printReport(name, homework, midterm, finalExam, finalGrade, letterGrade);

    return 0;
}


//noch zu viel code und while schleifen schlecht
//viele wiederholungen