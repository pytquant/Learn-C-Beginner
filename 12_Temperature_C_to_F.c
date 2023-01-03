#include <stdio.h>
#include <ctype.h>

int main() {
    char unit;
    float temp;

    printf("Is the temp in F or C?\n");
    scanf("%c", &unit);

    unit = toupper(unit); // Make the unit upper case.

    if(unit == 'F'){
        printf("Enter the temperature in Farenheit.\n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celcius is: %.1f'C\n", temp);
    } else if(unit == 'C'){
        printf("Enter the temperature in Celcius.\n");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("The temperature in Farenheit is: %.1f'F\n", temp);
    } else {
        printf("Please enter a valid temp type. (C or F)\n");
    }

    return 0;
}