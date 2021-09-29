/*
 * Program that print all input lines that are longer than
 * 80 characters.
 */

#include <stdio.h>

#define MAXLINE 160
#define LIMIT 80

int getline(char *, int);
void string_copy(char *, char *);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) != 0) {
        if (len > LIMIT)
            printf("%s", line);
    }

    return 0;
}

int getline(char *str, int lim)
{
    int c;
    int i = 0;

    while (i < lim && (c = getchar()) != EOF && c != '\n') {
        str[i] = c;
        i++;
    }

    if (c == '\n') {
        str[i] = c;
        i++;
    }

    str[i] = '\0';

    return i;
}
