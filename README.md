#include <stdio.h>
#include <math.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double calculate_sine(double angle);
double calculate_cosine(double angle);
double calculate_tangent(double angle);
double calculate_arcsine(double value);
double calculate_arccosine(double value);
double calculate_arctangent(double value);
double exponentiation(double base, double exponent);
double square_root(double number);
double cube_root(double number);
double nth_root(double number, double n);
long long factorial(int n);
double absolute_value(double number);
double logarithm_base_10(double number);
double natural_logarithm(double number);

int main() {
    double num1, num2;
    int choice, n;

    while(1) {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Sine\n");
        printf("6. Cosine\n");
        printf("7. Tangent\n");
        printf("8. Arcsine\n");
        printf("9. Arccosine\n");
        printf("10. Arctangent\n");
        printf("11. Exponentiation\n");
        printf("12. Square root\n");
        printf("13. Cube root\n");
        printf("14. Nth root\n");
        printf("15. Factorial\n");
        printf("16. Absolute value\n");
        printf("17. Logarithm (base 10)\n");
        printf("18. Natural logarithm (base e)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) break;

        switch(choice) {
            case 1: case 2: case 3: case 4: case 11:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                break;
            case 5: case 6: case 7: case 8: case 9: case 10: case 12: case 13: case 16: case 17: case 18:
                printf("Enter value: ");
                scanf("%lf", &num1);
                break;
            case 14:
                printf("Enter number: ");
                scanf("%lf", &num1);
                printf("Enter root: ");
                scanf("%lf", &num2);
                break;
            case 15:
                printf("Enter an integer: ");
                scanf("%d", &n);
                break;
        }

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
                if(num2 != 0) {
                    printf("Result: %.2lf\n", divide(num1, num2));
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case 5:
                printf("Sine: %.2lf\n", calculate_sine(num1));
                break;
            case 6:
                printf("Cosine: %.2lf\n", calculate_cosine(num1));
                break;
            case 7:
                printf("Tangent: %.2lf\n", calculate_tangent(num1));
                break;
            case 8:
                printf("Arcsine: %.2lf\n", calculate_arcsine(num1));
                break;
            case 9:
                printf("Arccosine: %.2lf\n", calculate_arccosine(num1));
                break;
            case 10:
                printf("Arctangent: %.2lf\n", calculate_arctangent(num1));
                break;
            case 11:
                printf("Exponentiation: %.2lf\n", exponentiation(num1, num2));
                break;
            case 12:
                printf("Square Root: %.2lf\n", square_root(num1));
                break;
            case 13:
                printf("Cube Root: %.2lf\n", cube_root(num1));
                break;
            case 14:
                printf("Nth Root: %.2lf\n", nth_root(num1, num2));
                break;
            case 15:
                printf("Factorial: %lld\n", factorial(n));
                break;
            case 16:
                printf("Absolute Value: %.2lf\n", absolute_value(num1));
                break;
            case 17:
                printf("Logarithm (base 10): %.2lf\n", logarithm_base_10(num1));
                break;
            case 18:
                printf("Natural Logarithm: %.2lf\n", natural_logarithm(num1));
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}


// Basic operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

// Trigonometric operations
double calculate_sine(double angle) { return sin(angle); }
double calculate_cosine(double angle) { return cos(angle); }
double calculate_tangent(double angle) { return tan(angle); }
double calculate_arcsine(double value) { return asin(value); }
double calculate_arccosine(double value) { return acos(value); }
double calculate_arctangent(double value) { return atan(value); }

// Algebraic operations
double exponentiation(double base, double exponent) { return pow(base, exponent); }
double square_root(double number) { return sqrt(number); }
double cube_root(double number) { return cbrt(number); }
double nth_root(double number, double n) { return pow(number, 1.0 / n); }
long long factorial(int n) {
    if (n < 0) return -1; // Factorial not defined for negative numbers
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
double absolute_value(double number) { return fabs(number); }

// Logarithmic operations
double logarithm_base_10(double number) { return log10(number); }
double natural_logarithm(double number) { return log(number); }
