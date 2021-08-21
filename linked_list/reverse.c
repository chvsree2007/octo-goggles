#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
void addnode(struct node **headref, int data);
void reverse(struct node *head);

int main()
{
	struct node *head = NULL;
	addnode(&head,1);
	addnode(&head,2);
	addnode(&head,3);
	reverse(head);
	return 0;
}

void addnode(struct node **headref, int data)
{
	struct node *temp = *headref;
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;
	
	if(*headref == NULL) //first node
	{
		*headref = new;
		return;
	}
	else
	{
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new;	
		return;
	}
}

void reverse(struct node *node)
{
#if 0
	while(node != NULL)
	{
		printf("%d\n",node->data);
		node = node->next;
	}
#endif
#if 1
	if(node->next != NULL)
	{
		reverse(node->next);
	}
	printf("%d\n",node->data);
#endif
}

