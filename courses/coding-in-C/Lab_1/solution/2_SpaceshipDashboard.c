#include <stdio.h>

char Shipclass[30];
int Crew;
int mission_days;
long long distance_covered;
double warp_percentage;
double range;


int main() {
    printf("Spaceship Dashboard\n\n");

    printf("%-20s | %-15s\n", "Name", "Value");
    printf("---------------------+----------------\n");

    printf("%s", "Ship Class: ");
        scanf("%s",Shipclass);
    printf("Crew: ");
        scanf("%d",&Crew);
    printf("Mission Days: ");
        scanf("%d",&mission_days);
    printf("Distance covered: ");
        scanf("%lld",&distance_covered);
    printf("Warp percentage: ");
        scanf("%lf",&warp_percentage);
    printf("range: ");
        scanf("%lf",&range);


    getchar();


    printf("%-20s | %-15s\n", "Ship Class", Shipclass);
    printf("%-20s | %-15d\n", "Crew", Crew);
    printf("%-20s | %-15d\n", "Mission Days", mission_days);
    printf("%-20s | %-15lld\n", "Distance Covered", distance_covered);
    printf("%-20s | %-15.1f\n", "Warp Percentage", warp_percentage);
    printf("%-20s | %-15.3f\n", "Range", range);

    getchar();

    return 0;
}