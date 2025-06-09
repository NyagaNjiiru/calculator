#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    int choice;
    float num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice)
    {
        case 1:
            result = add(num1, num2);
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = divide(num1, num2);
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid choice! Please select 1-4.\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
