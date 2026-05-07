#include <iostream>
#include <string>

class User {
    protected:
        std::string name;
        int id;
    public:
        User(std::string name, int id){
            this->name = name;
            this->id = id;
        }
        void printInfo(){
            std::cout << "Name: " << name << ", ID: " << id << std::endl;
        }
};

class Student : public User {
    
}

int main () {

}