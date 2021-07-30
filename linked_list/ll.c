#include <stdio.h>
#include <stdlib.h>

struct list{
	int value;
	struct list* next;
};

void push(struct list **head, int data);
void printlist(struct list *head);
void printreverse(struct list *head);

int main()
{
	struct list *head = NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	printf("list values \n");
	printlist(head);
	printf("Reverse list values \n");
	printreverse(head);
	return 0;
}

/* Head gets replaced by each new element added */
void push(struct list **headref, int data)
{
	struct list *new;
	new = (struct list*)malloc(sizeof(struct list));
	new->value = data;
	new->next = *headref;
	*headref = new;
}

void printlist(struct list *head)
{
	while(head != NULL)
	{
		printf("%d\n",head->value);
		head = head->next;
	}
}

void printreverse(struct list *head)
{
	if(head == NULL)
		return;
	printreverse(head->next);
	printf("%d\n",head->value);
}
