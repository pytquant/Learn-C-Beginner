#include <stdio.h>
/*
\n - new line
\t - horizontal tab
\v - vertical tab
see this below link for more 
https://en.wikipedia.org/wiki/Escape_sequences_in_C
*/
int main() {
    printf("Hello \nWorld!\n"); // New line
    printf("Hello \tWorld!\n"); // Horizontal tab
    printf("Hello \vWorld!\n"); // Vertical tab
    printf("\"To be or not to be?\" - William Shakespeare"); // Escape the literal quote
}