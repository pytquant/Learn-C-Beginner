#include <stdio.h>
#include <stdbool.h>

int main() {
    float temp = 25; // Temperature in C'
    bool sunny = true; // Is it sunny

    if(temp >= 0 && temp <=25 && sunny) {
        printf("The weather is good!");
    } else {
        printf("The weather is bad.");
    }

    return 0;
}