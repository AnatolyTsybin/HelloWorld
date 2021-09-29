#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, status, words;
    status = OUT;
    words = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',') {
            status = OUT;
        } else if (status == OUT) {
            status = IN;
            words++;
        }
    }

    printf("Number of words: %d\n", words);

    return 0;
}
