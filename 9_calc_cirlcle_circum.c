/*
Program to calculate the circumference of a cricle.
*/

#include <stdio.h>
#include <math.h>

int main() {

    double radius;

    printf("Enter the radious of the circle.\n");
    scanf("%lf", &radius);
    double circum = 2 * M_PI * radius;
    double  area = M_PI * pow(radius, 2);

    printf("The circumference of the circle is %.05lf\n", circum);
    printf("The area of the circle is %.05lf\n", area);
    return 0;

}