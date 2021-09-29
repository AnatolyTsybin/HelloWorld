/*
 * Program that convert temperature from Fahrenheit to Celsius
 */

#include <stdio.h>

double cel_fahr_convert(double temp)
{
    return 9.0/5.0*temp+32.0;
}

double fahr_cel_convert(double temp)
{
    return 5.0/9.0*(temp-32.0);
}

int main(int argc, char **argv)
{
    int c;
    double temp;

    while ((c = scanf("%lf", &temp)) != EOF) {
        if (*argv[1] == 'f') {
            temp = fahr_cel_convert(temp);
            printf("%lf\n", temp);
        } else if (*argv[1] == 'c') {
            temp = cel_fahr_convert(temp);
            printf("%lf\n", temp);
        } else {
            printf("Convertion type not defined!\n");
            return -1;
        }
    }

    return 0;
}
