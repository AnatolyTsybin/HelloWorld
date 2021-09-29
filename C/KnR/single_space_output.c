/*
 * Program that copying input to output with reducing number of spaces
 * in a string with only one.
 */

#include <stdio.h>

int main()
{
    int c, pc;

    pc = '0';

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            pc = c;
        } else if (c != ' ' && pc == ' ') {
            putchar(pc);
            putchar(c);
            pc = c;
        } else {
            putchar(c);
        }
    }

    return 0;
}
