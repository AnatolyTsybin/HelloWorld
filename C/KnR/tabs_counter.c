#include <stdio.h>

int main()
{
    int c, counter;

    counter = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            counter++;
    }

    printf("%d\n", counter);

    return 0;
}
