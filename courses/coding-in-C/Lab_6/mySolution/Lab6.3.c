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
    struct SensorData data [3000];
    int object_detection [3000];
};

void read_file (FILE *file, struct Sensor *sensor){
    int i;
    for (i=0; i<3000; i++){
        fscanf (file, "%f %lf", &sensor->data[i].time, &sensor->data[i].probability);
    }
}

int main () {
    FILE *fileSensor1 = fopen ("sensor1.txt", "r");
    FILE *fileSensor2 = fopen ("sensor2.txt", "r");

    struct Sensor sensor1 = {1, 0.8};
    struct Sensor sensor2 = {2, 0.7};

    read_file(fileSensor1, &sensor1);
    read_file(fileSensor2, &sensor2);

    fclose(fileSensor1);
    fclose(fileSensor2);
}