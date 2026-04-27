#include <iostream>
#include <string>

class Note {
    private:
        std::string* text;
    public:
        Note(std::string text_input) {
          text = new std::string(text_input);
        }
        ~Note() {
            delete text;
            text = nullptr;
            std::cout << ("Memory released") << std::endl;
        }
        Note (const Note& other){
            text = new std::string (*other.text);
        }
        void display(){
            std::cout << *text << std::endl;
        }
};

int main () {

    Note object1 ("Hallo");
    Note object2 (object1);
    object1.display();
    object2.display();
    return 0;
}

//the copy constructor copies the adress automatically so thats why we can initialize the second object with the first. both object.text shows to the same adress.
//the destructor is automatically called at the end of the scope so here end of main.
//however, this leads to undefined behaviour if both objects are destructed, it leads to trying to free the memory of the objects two times, as the second object is a copy of the first.