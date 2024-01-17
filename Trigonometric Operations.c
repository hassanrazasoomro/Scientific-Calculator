#include <stdio.h>
#include <math.h>

// Function prototypes
double calculateSine(double angle);
double calculateCosine(double angle);
double calculateTangent(double angle);
double calculateArcSine(double value);
double calculateArcCosine(double value);
double calculateArcTangent(double value);

int main() {
    double value;
    int choice;

    printf("Trigonometric Calculator\n");
    printf("1. Sine\n2. Cosine\n3. Tangent\n4. Arcsine\n5. Arccosine\n6. Arctangent\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the value (in radians for Sine, Cosine, Tangent and in range [-1, 1] for Arcsine, Arccosine): ");
    scanf("%lf", &value);

    switch(choice) {
        case 1:
            printf("Sine: %.2lf\n", calculateSine(value));
            break;
        case 2:
            printf("Cosine: %.2lf\n", calculateCosine(value));
            break;
        case 3:
            printf("Tangent: %.2lf\n", calculateTangent(value));
            break;
        case 4:
            printf("Arcsine: %.2lf\n", calculateArcSine(value));
            break;
        case 5:
            printf("Arccosine: %.2lf\n", calculateArcCosine(value));
            break;
        case 6:
            printf("Arctangent: %.2lf\n", calculateArcTangent(value));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

double calculateSine(double angle) {
    return sin(angle);
}

double calculateCosine(double angle) {
    return cos(angle);
}

double calculateTangent(double angle) {
    return tan(angle);
}

double calculateArcSine(double value) {
    // Check for valid input range
    if(value < -1 || value > 1) {
        printf("Invalid input. Value must be in [-1, 1].\n");
        return 0.0;
    }
    return asin(value);
}

double calculateArcCosine(double value) {
    // Check for valid input range
    if(value < -1 || value > 1) {
        printf("Invalid input. Value must be in [-1, 1].\n");
        return 0.0;
    }
    return acos(value);
}

double calculateArcTangent(double value) {
    return atan(value);
}

