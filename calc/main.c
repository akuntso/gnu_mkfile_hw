#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    double num1, num2;
    int fact_input;

    while (1) {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Factorial\n6. Square Root\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting program...\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", add(num1, num2));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", subtract(num1, num2));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", multiply(num1, num2));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", divide(num1, num2));
                break;
            case 5:
                printf("Enter an integer: ");
                scanf("%d", &fact_input);
                printf("Result: %lld\n", factorial(fact_input));
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Result: %.2lf\n", square_root(num1));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
