#include <stdio.h>

#define Mask_Error           (1 << 7)
#define Mask_overtemperature (1 << 6)
#define Mask_undervoltage    (1 << 5)
#define Mask_value           0x0F

int main(void) {
    unsigned char status = 0xA7;

    if (status & Mask_Error) {
        printf("Error\n");
    }
    if (status & Mask_overtemperature) {
        printf("Overtemperature\n");
    }
    if (status & Mask_undervoltage) {
        printf("Undervoltage\n");
    }

    unsigned char messwert = status & Mask_value;
    printf("Messwert: %u\n", messwert);

    getchar();
    return 0;
}