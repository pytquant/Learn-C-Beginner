/*/
Functions basic
Print Birthday song function
Take the name and age as arguments.
*/
#include <stdio.h>
void birthday(char name[], int age) {
    printf("Happy %dth birthday %s!\n", age, name);
}

int main() {

    char name[] = "Hamlin";
    int age = 25;

    birthday(name, age);

    return 0;
}