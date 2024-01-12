// Logarithmic Operations: (mandatory)
#include <stdio.h>
#include <math.h>

double logarithmBase10(double x);
double naturalLogarithm(double x);
double customBaseLogarithm(double base, double x);

int main() {
    double num, base;
    int choice;

    while(1) {
        printf("\nChoose the logarithmic operation:\n");
        printf("1. Logarithm (base 10)\n");
        printf("2. Natural logarithm (base e)\n");
        printf("3. Custom base logarithm\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 4) {
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter the number: ");
                scanf("%lf", &num);
                printf("Result: %.2lf\n", logarithmBase10(num));
                break;
            case 2:
                printf("Enter the number: ");
                scanf("%lf", &num);
                printf("Result: %.2lf\n", naturalLogarithm(num));
                break;
            case 3:
                printf("Enter the base and the number: ");
                scanf("%lf %lf", &base, &num);
                printf("Result: %.2lf\n", customBaseLogarithm(base, num));
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

double logarithmBase10(double x) {
    if(x > 0) {
        return log10(x);
    } else {
        printf("Error: Logarithm for non-positive numbers is undefined.\n");
        return 0;
    }
}

double naturalLogarithm(double x) {
    if(x > 0) {
        return log(x);
    } else {
        printf("Error: Logarithm for non-positive numbers is undefined.\n");
        return 0;
    }
}

double customBaseLogarithm(double base, double x) {
    if(base > 0 && base != 1 && x > 0) {
        return log(x) / log(base);
    } else {
        printf("Error: Invalid base or non-positive number for logarithm.\n");
        return 0;
    }
}
