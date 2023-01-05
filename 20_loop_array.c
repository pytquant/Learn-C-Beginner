/*
Loop through an array of prices and print the value.
*/

#include <stdio.h>

int main() {
    double prices[] = {5.0,6.0,2.0,30.0,0.5};

    for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("The price is $%.2f\n", prices[i]);
    }

    return 0;
}