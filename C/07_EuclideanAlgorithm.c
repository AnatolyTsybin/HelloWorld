/*
 * Euclidean algorithm is a method of computing the greatest common divisor
 * of two integers, the largest number that divides them without a remainder.
 */

#include <stdio.h>

int greatest_common_divisor(int x, int y)
{
	if (x%y == 0)
		return y;
	else
		return greatest_common_divisor(y, x%y);
}

int main()
{
	unsigned int a, b, result;

	printf("Enter two integers: ");

	while (scanf("%d %d", &a, &b) == 2) {
		result = greatest_common_divisor(a, b);
		printf("The greatest common divisor is %d.\n", result);
		printf("Enter next two integers: ");
	}

	putchar(10);

	return 0;
}
