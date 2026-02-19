#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SensorData {
    float time;
    double probability;
};

struct Sensor {
    int id;
    double threshold;
    SensorData *data;
    int *object_detection;
};

int main () {

}