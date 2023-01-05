/*
Do while script
A while loop will check condition and then execute the code.
A do while loop will always execute a block of code and then check the condition.
*/

#include <stdio.h>

int main() {

    int number = 0;
    int sum = 0;

    do{

    printf("Enter a number above 0: ");
    scanf("%d", &number);
    if (number > 0)
    {
        sum += number;
    } 

    } while(number > 0);

    printf("Sum is %d\n", sum);
    return 0;
}

