#include <stdio.h>

int main() {
    
    int x; // declare x as an int
    x = 10; // Initialization We can only store an integer value
    int y = 20; // Initiate and declare the variable in one line

    int apples =  5; // Store apples as an integer
    float interest_rate = 0.0425; // Store interest rates as float (decimals)

    char bond_rating = 'A'; // Store in single quotes, as this only takes a single character
    char bond_rating2[] = "Aaa"; // This takes an array of characters.
    printf("Bond's Rating in single character is %c", bond_rating); 
    printf("\n");
    printf("Bond's Rating is in array of characters is %s", bond_rating2);
    printf("\n");

    /*
    Notice the %c and %s above. These are format specifiers.
    See this below link for more format specifiers. We will learn this in the next lesson.
    https://www.freecodecamp.org/news/format-specifiers-in-c/
    */

}