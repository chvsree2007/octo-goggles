#include <stdio.h>
void addnewnode(struct list *node, int val);
void printlist(struct list *node);

struct list{
	int value;
	struct list* next;
};

int main()
{
	struct list node;
	node.value = 10;
	node.next = NULL;
	//printf("%d\n",node.value);
	addnewnode(&node,20);
	printlist(&node);
	return 0;
}

void addnewnode(struct list *node, int val)
{
	struct list new;
	new.value = val;
	new.next = NULL;
	node->next = &new;
}

void printlist(struct list *node)
{
	while(node != NULL)
	{
		printf("%d\n",node->value);
		node = node->next;
	}
}
