/*
 * Program that print a histogram of the frequencies of different
 * characters in its input.
 */

#include <stdio.h>

#define TERM_WIDTH 60

int main()
{
    int c;
    int ccount[26];
    int max;
    int histogram_length;
    int counter;

    for (int i = 0; i < 26; i++)
        ccount[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            ccount[c-'a']++;
        if (c >= 'A' && c <= 'Z')
            ccount[c-'A']++;
    }

    for (int i = 0; i < 26; i++)
        if (max < ccount[i])
            max = ccount[i];

    for (int i = 0; i < 26; i++) {
        putchar('a'+i);
        printf(" %.4d: ", ccount[i]);

        counter = 0;
        histogram_length = TERM_WIDTH*ccount[i]/max;
        while (counter < histogram_length) {
            putchar('-');
            counter++;
        }
        putchar('>');
        putchar(10);
    }

    return 0;
}
