#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

struct singly_linked_list
{
	int element;
	struct singly_linked_list *next;
};

int main()
{
	struct singly_linked_list *first = NULL, *last = NULL;
	int c, i = 0;

	printf("Enter as many integers as you want and Ctrl+D to continue:\n");
	while(scanf("%d", &c) != EOF){
		if(last != NULL){
			last->next = malloc(sizeof(struct singly_linked_list));
			last = last->next;
			last->element = c;
		} else {
			last = malloc(sizeof(struct singly_linked_list));
			last->element = c;
			first = last;
		}
	}

	struct singly_linked_list *tmp = NULL;
	while(TRUE){
		if(tmp == NULL){
			tmp = first;
			printf("\nYou entered:\n");
			i++;
		}
		printf("%d ", tmp->element);
		tmp = tmp->next;
		if(tmp == NULL && i == 2){
			putchar(10);
			break;
		}
	}

	while(first != last){
		tmp = first->next;
		free(first);
		first = tmp;
	}

	return 0;
}
