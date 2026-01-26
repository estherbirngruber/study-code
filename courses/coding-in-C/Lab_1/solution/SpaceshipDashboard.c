#include <stdio.h>

char Shipclass[] = "USS Enterprise NCC-1701-D";
int Crew = 250;
int mission_days = 35;
long long distance_covered = 450928;
double warp_percentage = 11.1;
double range = 566.813;

int main() {
    printf("Spaceship Dashboard\n\n");

    printf("%-20s | %-15s\n", "Name", "Value");
    printf("---------------------+----------------\n");

    printf("%-20s | %-15s\n", "Ship Class", Shipclass);
    printf("%-20s | %-15d\n", "Crew", Crew);
    printf("%-20s | %-15d\n", "Mission Days", mission_days);
    printf("%-20s | %-15lld\n", "Distance Covered", distance_covered);
    printf("%-20s | %-15.1f\n", "Warp Percentage", warp_percentage);
    printf("%-20s | %-15.3f\n", "Range", range);
    
    printf("\nENTER drücken zum Beenden...");
    getchar();

    return 0;
}