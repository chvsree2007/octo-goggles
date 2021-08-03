#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

void push(struct node **headref, int value);
void appendnode(struct node **head, int value);
void printlist(struct node **head);
void insertafter(struct node *prev, int value);

int main()
{
	struct node *head = NULL;
	appendnode(&head, 10);
	appendnode(&head, 20);
	appendnode(&head, 30);
	appendnode(&head, 40);
	push(&head,50);
	insertafter(head->next,40);
	printlist(&head);
	printf("\n");
	appendnode(&head, 60);
	printlist(&head);
	return 0;
}

void appendnode(struct node **headref, int value)
{
	struct node *temp;
	if(*headref == NULL){ //First node
		struct node *head = (struct node*)malloc(sizeof(struct node));
		head->data = value;
		head->next = NULL;
		*headref = head;
	}else{
		temp = *headref; //Copy the headref to temp variable
		//Create a new node
		struct node *new = (struct node*)malloc(sizeof(struct node));
		new->data = value;
		new->next = NULL;
		//Traverse the list
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new;	
	}
}

void insertafter(struct node *prev, int value)
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = value;
	new->next = prev->next;
	prev->next = new;
}

void push(struct node **headref, int value)
{	
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = value;
	new->next = *headref;
	*headref = new;
}

void printlist(struct node **headref)
{
	struct node *temp;
	if(*headref == NULL)
	{
		printf("list is empty\n");
		return;
	}
	else{
		temp = *headref;
		while(temp != NULL)
		{
			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}
}
