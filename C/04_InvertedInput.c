#include <stdio.h>
#include <stdlib.h>

struct singly_linked_list
{
	int element;
	struct singly_linked_list *next;
};

struct singly_linked_list *list_input()
{
	struct singly_linked_list *tmp = NULL, *current = NULL;
	char buf[16];
	int c;

	// FIXME: write input for processing not only line by line
	while(fgets(buf, sizeof(buf), stdin)){
		if(sscanf(buf, "%d", &c) == 1){
			tmp = current;
			current = malloc(sizeof(struct singly_linked_list));
			current->element = c;
			current->next = tmp;
		} else
			printf("Incorrect input, try again: \n");
	}

	return current;
}

void list_output(struct singly_linked_list *current)
{
	struct singly_linked_list *tmp = NULL;

	while(current){
		printf("%d ", current->element);
		tmp = current;
		current = current->next;
		free(tmp);
	}

	putchar(10);
}

int main()
{
	struct singly_linked_list *first = NULL;

	printf("Enter as many integers as you want one per line and Ctrl+D to finish:\n");
	first = list_input();

	printf("Entered numbers in inverted order is:\n");
	list_output(first);

	return 0;
}
