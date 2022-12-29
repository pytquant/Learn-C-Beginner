#include <stdio.h>

int main() {
    
    int x; // declare x as an int
    x = 10; // Initialization We can only store an integer value
    int y = 20; // Initiate and declare the variable in one line

    int apples =  5; // Store apples as an integer
    float interest_rate = 4.25; // Store interest rates as float (decimals)

    char bond_rating = 'A'; // Store in single quotes, as this only takes a single character
    char bond_rating2[] = "Aaa"; // This takes an array of characters.
    printf("Bond's Rating in single character is %c", bond_rating); 
    printf("\n");
    printf("Bond's Rating is in array of characters is %s", bond_rating2);
    printf("\n");

    /*
    Add format specifiers below
    */

   printf("We have %d Apples", apples);
   printf("\n");
   printf("The current interest rates on bonds with ratings %c is %.2f%%\n", bond_rating, interest_rate);

   /*
   More format specifiers
   */

   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");

   return 0;

    /*
    See this below link for more format specifiers.
    https://www.freecodecamp.org/news/format-specifiers-in-c/
    */

}