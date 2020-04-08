/*
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = -50;
	upper = 1000;
	step = 50;

	printf("Temperature\n");
	printf("Celsius Fahrenheit\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * 9/5) + 32;
		printf("%7d%11d\n", celsius, fahr);
		celsius += step;
	}

	return 0;
}
