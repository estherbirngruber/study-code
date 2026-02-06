#include <stdio.h>

int main(){
    float first_number;
    float second_number;
    int operation;
    float solution; 

    printf ("type your first number: ");
    scanf("%f", &first_number);
    getchar();  //eigentlich nicht nötig

    printf ("\ntype in your second number: ");
    scanf("%f", &second_number);
    getchar();

    printf("\npossible arithmetic operations:\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("type the number of the operation you want ");
    scanf("%d", &operation);
    getchar();

    switch (operation) {
        case 1:
        solution = first_number + second_number;
        printf("%.2f + %.2f = %.2f", first_number, second_number, solution);
        break;
        case 2:
        solution = first_number - second_number;
        printf("%.2f - %.2f = %.2f", first_number, second_number, solution);
        break;
        case 3:
        solution = first_number * second_number;
        printf("%.2f * %.2f = %.2f", first_number, second_number, solution);
        break;
        case 4:
        solution = first_number / second_number;
        if (second_number == 0) {
            printf("division by zero not possible");
        }
        else {
            printf("%.2f / %.2f = %.2f", first_number, second_number, solution);
        }
        break;
        default:
            printf("\ninvalid operation");
        break;
    }
    getchar();

    return 0;
}