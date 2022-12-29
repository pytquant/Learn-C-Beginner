#include <stdio.h>
#include <math.h>

int main() {
    double A = sqrt(16); // Square Root function
    double B = pow(2, 4); // 2**4
    int C = round(3.49); // Round numbers (up if its >= 0.5 and down if its < 0.5)
    int D = ceil(3.01); // Round Up
    int E = floor(3.99); // Round Down
    double F = fabs(-100); // Absolute values
    double G = log(100); // Log function
    double I = sin(90);
    double J = cos(0);
    double K = tan(45);

    printf("%.0lf\n" , A);
    printf("%.0lf\n" , B);
    printf("%d\n" , C);
    printf("%d\n" , D);
    printf("%d\n" , E);
    printf("%d\n", 6^12);
    printf("%.0lf\n" , F);
    printf("%.0lf\n" , G);
    printf("%.0lf\n" , I);
    printf("%.0lf\n" , J);
    printf("%.0lf\n" , K);

    return 0;
}