/*
 * Program that prints a histogram of the length of words in its input.
 */

#include <stdio.h>

#define TERM_WIDTH 60
#define WORD_LENGTH 16

int main(int argc, char **argv)
{
    int c;
    int words[WORD_LENGTH];
    int length;
    int max;
    int counter;
    int histogram_length;

    for (int i = 0; i < WORD_LENGTH; i++)
        words[i] = 0;

    length = 0;
    max = 0;

    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            length++;
        } else if (length < WORD_LENGTH && length != 0) {
            words[length]++;
            if (max < words[length])
                max = words[length];
            length = 0;
        }
    }

    printf("Relative number of words by length\n");

    for (int i = 1; i < WORD_LENGTH; i++) {
        printf("Symbols: %.2d ", i);
        counter = 0;
        histogram_length = TERM_WIDTH*words[i]/max;
        while (counter < histogram_length) {
            putchar('-');
            counter++;
        }
        putchar(10);
    }

    return 0;
}
