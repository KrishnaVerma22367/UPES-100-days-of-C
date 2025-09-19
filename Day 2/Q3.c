// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main() {

float length,breadth;

printf("Enter lenght of rectangle:")
scanf("%f",&lenght);

printf("Enter breadth of rectangle:")
scanf("%f",&breadth);

area = lenght * breadth;
perimeter = 2 * (lenght + breadth);

printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}