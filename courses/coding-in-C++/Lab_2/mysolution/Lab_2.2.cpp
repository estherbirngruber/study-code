#include <iostream>
#include <string>

class Note {
    private:
        std::string* text;
    public:
        Note(std::string text) {
            while (true) {
                std::cout << ("Type in your message: ");
                if (std::getline(std::cin, text)){
                break;
                }
            }
        }
        ~Note() {
            delete text;
        }
        void display(){
            std::cout << ("");
        }
};

int main () {

}