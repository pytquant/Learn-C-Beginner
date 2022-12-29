/*
Program to calculate the Hypotenuse of the right triangle.
*/

#include <stdio.h>
#include <math.h>

int main() {

    double base, height;
    printf("Enter the base of the triangle\n");
    scanf("%lf", &base);
    printf("Enter the height of the triangle\n");
    scanf("%lf", &height);

    double hyp = sqrt(pow(base, 2) + pow(height, 2)); // Calculate the Hypotenuse

    printf("The Hypotenuse of the right triangle is %.2lf\n", hyp);
    return 0;
}
