#include <stdio.h>

int main()
{
    int character, check;

    while (check = ((character = getchar()) != EOF))
        printf("%d", check);

    printf("%d", check);
    putchar(10);
    return 0;
}
