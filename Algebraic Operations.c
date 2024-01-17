#include <stdio.h>
#include <math.h>

// Function prototypes
double exponentiation(double base, double exponent);
double squareRoot(double number);
double cubeRoot(double number);
double nthRoot(double number, double n);
unsigned long long factorial(int number);
double absoluteValue(double number);

int main() {
    double base, exponent, number, n;
    int choice, num;

    printf("Algebraic Operations Calculator\n");
    printf("1. Exponentiation\n2. Square Root\n3. Cube Root\n4. Nth Root\n5. Factorial\n6. Absolute Value\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &base, &exponent);
            printf("Result: %.2lf\n", exponentiation(base, exponent));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%lf", &number);
            printf("Square Root: %.2lf\n", squareRoot(number));
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%lf", &number);
            printf("Cube Root: %.2lf\n", cubeRoot(number));
            break;
        case 4:
            printf("Enter number and root value: ");
            scanf("%lf %lf", &number, &n);
            printf("Nth Root: %.2lf\n", nthRoot(number, n));
            break;
        case 5:
            printf("Enter an integer: ");
            scanf("%d", &num);
            printf("Factorial: %llu\n", factorial(num));
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &number);
            printf("Absolute Value: %.2lf\n", absoluteValue(number));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

double exponentiation(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double number) {
    return sqrt(number);
}

double cubeRoot(double number) {
    return cbrt(number);
}

double nthRoot(double number, double n) {
    // Guard against division by zero
    if (n == 0) {
        printf("Error: Division by zero.\n");
        return 0;
    }
    return pow(number, 1.0 / n);
}

unsigned long long factorial(int number) {
    if (number < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
        return 0;
    }
    unsigned long long fact = 1;
    for (int i = 1; i <= number; i++) {
        fact *= i;
    }
    return fact;
}

double absoluteValue(double number) {
    return fabs(number);
}

