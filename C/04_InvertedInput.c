#include <stdio.h>
#include <stdlib.h>

struct singly_linked_list
{
	int element;
	struct singly_linked_list *next;
};

int main()
{
	struct singly_linked_list *first = NULL, *tmp = NULL;
	int c;

	printf("Enter as many integers as you want and Ctrl+D to finish:\n");
	
	while(scanf("%d", &c) != EOF){
		if(first != NULL){
			tmp = first;
			first = malloc(sizeof(struct singly_linked_list));
			first->element = c;
			first->next = tmp;
		} else {
			first = malloc(sizeof(struct singly_linked_list));
			first->element = c;
		}
	}

	printf("Entered numbers in inverted order is:\n");

	while(first != NULL){
		printf("%d\n", first->element);
		tmp = first;
		first = first->next;
		free(tmp);
	}

	return 0;
}
