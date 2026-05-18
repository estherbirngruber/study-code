#include <iostream>
#include <stdexcept>




class ConfigLoader {
        public:
    void load(const std::string& filename){
    if (filename.empty()){
        throw std::invalid_argument ("filename must not be empty");
    }

    std::cout << "[OK] load Configuration: " << filename << "\n";
};


int main () {
    ConfigLoader Loader;
    const 
}