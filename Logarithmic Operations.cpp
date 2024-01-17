#include <stdio.h>
#include <math.h>

// Function prototypes
double logarithmBase10(double number);
double naturalLogarithm(double number);
double customBaseLogarithm(double number, double base);

int main() {
    double number, base;
    int choice;

    printf("Logarithmic Operations Calculator\n");
    printf("1. Logarithm (base 10)\n2. Natural logarithm (base e)\n3. Custom base logarithm\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &number);
            printf("Logarithm (base 10): %.2lf\n", logarithmBase10(number));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%lf", &number);
            printf("Natural logarithm (base e): %.2lf\n", naturalLogarithm(number));
            break;
        case 3:
            printf("Enter number and base:");
scanf("%lf %lf", &number, &base);
printf("Custom base logarithm: %.2lf\n", customBaseLogarithm(number, base));
break;
default:
printf("Invalid choice!\n");
}


return 0;
}

double logarithmBase10(double number) {
if (number <= 0) {
printf("Error: Logarithm of non-positive number is undefined.\n");
return -1;
}
return log10(number);
}

double naturalLogarithm(double number) {
if (number <= 0) {
printf("Error: Logarithm of non-positive number is undefined.\n");
return -1;
}
return log(number);
}

double customBaseLogarithm(double number, double base) {
if (number <= 0 || base <= 0 || base == 1) {
printf("Error: Invalid input for logarithm.\n");
return -1;
}
return log(number) / log(base);
}
