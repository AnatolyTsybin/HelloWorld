#include <stdio.h>

int fibonacci_number(int i)
{
	if(i <= 0)
		return 0;
	else if(i == 1)
		return 1;
	else
		return fibonacci_number(i-1) + fibonacci_number(i-2);
}

int main()
{
	int n;
	printf("Enter number of Fibonacci numbers: ");
	while(scanf("%d", &n) != EOF){
		printf("%d Fibonacci number is %d.\n", n, fibonacci_number(n));
		printf("Enter next number or Ctrl+D to exit: ");
	}
	return 0;
}
