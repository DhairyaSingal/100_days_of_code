//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main() {
    float radius, area, PI, circumference;
    PI = 3.14159;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output
    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circumference);

    return 0;
}

