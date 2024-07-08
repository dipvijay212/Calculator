#include <stdio.h>

// Function prototypes
void addition();
void subtraction();
void multiplication();
void division();
void modulus();

int main() {
    char choice;

    do {
       
        printf("\nMenu:\n");
        printf("press 1 for Addition\n");
        printf("press 2 for Subtraction\n");
        printf("press 3 for Multiplication\n");
        printf("press 4 for Division\n");
        printf("press 5 for Modulus\n");
        printf("press 6 for Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                addition();
                break;
            case '2':
                subtraction();
                break;
            case '3':
                multiplication();
                break;
            case '4':
                division();
                break;
            case '5':
                modulus();
                break;
            case '6':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1-6.\n");
        }
    } while (choice != '6'); 

    return 0;
}

void addition() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 + num2;
    printf("Result: %.2lf\n", result);
}

void subtraction() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 - num2;
    printf("Result: %.2lf\n", result);
}

void multiplication() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 * num2;
    printf("Result: %.2lf\n", result);
}

void division() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("Result: %.2lf\n", result);
    }
}

void modulus() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = num1 % num2;
    printf("Result: %d\n", result);
}

