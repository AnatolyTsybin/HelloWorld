#include <stdio.h>

int main()
{
	printf("Enter two numbers: ");
	int a, b, c, res;
	while( (c=scanf("%d, %d", &a, &b)) != EOF ){
		printf("\t+-----------------+\n");
		printf("\t| Entered numbers |\n");
		printf("+-------+-----------------+\n");
		printf("|  Hex  |%8x %8x|\n", a, b);
		printf("|  Oct  |%8o %8o|\n", a, b);
		printf("|  Dec  |%8d %8d|\n", a, b);
		printf("+-------+-----------------+\n");
		res = a + b;
		printf("\t|   Add result    |\n");
		printf("+-------+-----------------+\n");
		printf("|  Hex  |%17x|\n", res);
		printf("|  Oct  |%17o|\n", res);
		printf("|  Dec  |%17d|\n", res);
		printf("+-------+-----------------+\n");
		res = a - b;
		printf("\t|   Sub result    |\n");
		printf("+-------+-----------------+\n");
		printf("|  Hex  |%17x|\n", res);
		printf("|  Oct  |%17o|\n", res);
		printf("|  Dec  |%17d|\n", res);
		printf("+-------+-----------------+\n");
		res = a * b;
		printf("\t|   Mul result    |\n");
		printf("+-------+-----------------+\n");
		printf("|  Hex  |%17x|\n", res);
		printf("|  Oct  |%17o|\n", res);
		printf("|  Dec  |%17d|\n", res);
		printf("+-------+-----------------+\n");
		res = a / b;
		printf("\t|   Div result    |\n");
		printf("+-------+-----------------+\n");
		printf("|  Hex  |%17x|\n", res);
		printf("|  Oct  |%17o|\n", res);
		printf("|  Dec  |%17d|\n", res);
		printf("+-------+-----------------+\n");
		printf("Enter next pair of numbers or Ctrl+D to exit: ");
	}
	return 0;
}
