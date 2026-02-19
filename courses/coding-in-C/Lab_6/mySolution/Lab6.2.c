#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    float fuel_level;
    float max_fuel_level;
    char model[30];
};

void refuel (struct Car *pCar, float add_fuel){
    if (pCar -> fuel_level + add_fuel <= pCar -> max_fuel_level) {
        pCar -> fuel_level = pCar -> fuel_level + add_fuel;
    } else {
        pCar -> fuel_level = pCar -> max_fuel_level;
    }
}

int main() {
    struct Car car;
    car.fuel_level = 10.00;
    car.max_fuel_level = 100.00;
    strcpy(car.model, "Porsche");

    refuel (&car, 12.50);

    printf("%.2f  %.2f %s", car.fuel_level, car.max_fuel_level, car.model);

}

