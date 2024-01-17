#include <stdio.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    int choice;

    printf("Simple Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(choice) {
        case 1:
            printf("Result: %.2lf\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %.2lf\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result: %.2lf\n", multiply(num1, num2));
            break;
        case 4:
            if(num2 != 0.0)
                printf("Result: %.2lf\n", divide(num1, num2));
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

