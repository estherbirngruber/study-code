#include <iostream>
#include <cstdint>
#include <string>

class DrinkBuilder {
    private:
    std::string name;
    int sugar;
    int temperature;
    bool withMilk;
    static constexpr int MAX_SUGAR = 10;
    static constexpr int MAX_TEMPERATURE = 120;

    public:
    DrinkBuilder& setName(const std::string& Drinkname){
        this -> name = Drinkname;
        return *this;
    }
    DrinkBuilder& setSugar(int sugar){
        if (sugar > MAX_SUGAR){
            std::cout << "INVALID SUGAR";
        } else if (sugar < 0){
            std::cout << "INVALID SUGAR";
        } else {
            this -> sugar = sugar;
        }
        return *this;
    }
    DrinkBuilder& setTemperature(int temperature){
        if (temperature > MAX_TEMPERATURE){
            std::cout << "INVALID TEMPERATURE";
        } else if (temperature < 0){
            std::cout << "INVALID TEMPERATURE";
        } else {
            this -> temperature = temperature;
        }
        return *this;
    }
    DrinkBuilder& setWithMilk(bool withMilk){
        this -> withMilk = withMilk;
        return *this;
    }
    void print(){
        std::cout << "Here is your " << name << std::endl << "Sugar: " << sugar << std::endl << "Tempreature: " << temperature << std::endl;
        if (withMilk){
            std::cout << "With Milk";
        }else{
            std::cout << "Without Milk";
        }

    }
};

int main (){
    DrinkBuilder builder;

        builder.setName("Tea")
        .setSugar(12)
        .setTemperature(65)
        .setWithMilk(true)
        .print();
}

/*
bin hier nicht ganz fertig, aber an sich viel hierbei gelernt
die validierung und einschreiten, falls der drink invalid ist, ist mir noch nicht sauber gelungen
*/