/*
 * Program that counts number of spaces, tabs and new line symbols.
 */

#include <stdio.h>

int main()
{
    int c, spaces, tabs, new_lines;

    spaces = 0;
    tabs = 0;
    new_lines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            spaces++;
        if (c == '\t')
            tabs++;
        if (c == '\n')
            new_lines++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of new lines: %d\n", new_lines);

    return 0;
}
