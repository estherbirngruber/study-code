#include <iostream>
#include <string>

class Note {
    private:
        std::string* text;
    public:
        Note(std::string) {
            std::cout << "Type in your message: "
            std::cin >> std::string* text;
        }
        ~Note() {
            delete std::string* text;
        }
        void display(){
            std::cout << ""
        }
};

int main () {

}