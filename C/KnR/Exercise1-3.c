/*
 * Modify the temperature conversion program to print a heading above the table.
 */

#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -50;
	upper = 1000;
	step = 50;

	printf("Temperature\n");
	printf("Fahrenheit Celsium\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f%8.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
