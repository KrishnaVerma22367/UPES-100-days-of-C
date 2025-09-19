// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float a, b;
    float sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
       
    if (b != 0) {
        quotient = a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}