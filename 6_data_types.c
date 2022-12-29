#include <stdio.h>
#include <stdbool.h> // Need this for boolean

int main() {
    char a = 'C'; // %c

    char b[] = "ABC"; // %s

    float c = 3.141592; //32 bit precision. 6-7 digits %f

    double d = 3.14159235358979358974512; // 64 bit precision. 15 - 16 digits %lf

    bool e = true; // true or false 1=true and 0 = false
    bool f = false; // true or false 1=true and 0 = false


    int j = 32544478; // %d

    printf("%0.15f\n", c); // This float is not precise
    printf("%0.25lf\n", d);
    printf("true: %d\nfalse: %d\n", e, f); // true prints as 1 and false will print as 0

    return 0;
}