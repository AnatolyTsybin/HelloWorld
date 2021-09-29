/*
 * Standard program that writes all your input.
 */

#include <stdio.h>

int main()
{
    int character;

    while ((character = getchar()) != EOF)
        putchar(character);

    return 0;
}
