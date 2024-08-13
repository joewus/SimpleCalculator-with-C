 #include <stdio.h>
#include <math.h>

float squareRoot(float c);

int main() {
    int a, b;
    int type;
    float result;

    // Prompt the user for the type of operation
    printf("Hello, what operation would you like to carry out?\n");
    printf("Select 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division or 5 for square root: ");
    if (scanf("%d", &type) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Check if the user selected square root
    if (type == 5) {
        printf("Enter a non-negative number for your square root: ");
        if (scanf("%d", &a) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        if (a < 0) {
            printf("Square root of negative number is not possible.\n");
            return 1;
        }

        result = squareRoot(a); 
        printf("The square root of %d is %.2f\n", a, result);
        return 0; // End the program after square root calculation
    }

    // Check if the user selected an invalid operation
    if (type < 1 || type > 4) {
        printf("Unknown operation. Please select 1, 2, 3, 4 or 5.\n");
        return 1;
    }

    // Prompt the user for the numbers to operate on
    printf("Enter your first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Enter your second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Perform the operation based on the user's choice
    switch (type) {
        case 1:
            result = a + b;
            printf("Your result is: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Your result is: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Your result is: %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = (float)a / b;
                printf("Your result is: %.2f\n", result);
            } else {
                printf("Invalid operation, division by zero not allowed\n");
            }
            break;
    }

    return 0;
}

float squareRoot(float c) {
    return sqrt(c);
}
