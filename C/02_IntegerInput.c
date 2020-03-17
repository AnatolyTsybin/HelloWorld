#include <stdio.h>

void table_output(int a, int b)
{
	int res;
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

int main()
{
	printf("Enter two numbers (without punctuation): ");
	int a, b;
	char buf[32];
	while ( fgets(buf, sizeof(buf), stdin ) != NULL ){
		if(sscanf(buf, "%d %d", &a, &b) == 2)
			table_output(a, b);
		else if (sscanf(buf, "%d, %d", &a, &b) == 2)
			table_output(a, b);
		else
			printf("Incorrect input, try again: ");
	}
	return 0;
}
