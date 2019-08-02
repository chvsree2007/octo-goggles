#include<stdio.h>
#include<stdlib.h>

struct Node *addempty(struct Node *last, int data);
struct Node *addbegin(struct Node *last, int data);
struct Node *addend(struct Node *last, int data);
struct Node *addafter(struct Node *last, int item, int data);

struct Node{
	int data;
	struct Node *next;
};

struct Node *addempty(struct Node *last, int data)
{
	if(last!=NULL)
		return last;
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	last = temp;
	last->next = last;
	return last;
}

struct Node *addbegin(struct Node *last, int data)
{
	if(last == NULL)
		return addempty(last, data);
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = last->next;
	last->next = temp;
}

struct Node *addend(struct Node *last, int data)
{
	if(last == NULL)
		return addempty(last, data);
	
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = last->next;
	last->next = temp;
	last = temp;
	return last;
}

void traverse(struct Node *last)
{
	struct Node *p;
	if(last == NULL){
		printf("Empty circ list\n");
		return;
	}
	p = last->next;
	do{
		printf("%d\n",p->data);
		p = p->next;
	}while(p!=last->next);
}

struct Node *addafter(struct Node *last, int item, int data)
{
	if(last == NULL)
		return NULL;
	struct Node *temp, *p;
	p = last->next;
       do{
       		if(p->data == item){
	 		temp = (struct Node*)malloc(sizeof(struct Node));
			temp->data = data;
			temp->next = p->next;
			p->next = temp;
			if(p == last)
				last =temp;
			return last;
		}
		p = p->next;
	}while(p!=last->next);
	printf("Item not in list\n");
	return last;       
}

int main()
{
	struct Node *last = NULL;
	last = addempty(last,3);
	last = addbegin(last,2);
	last = addbegin(last,1);
	last = addend(last,4);
	last = addend(last,5);
	last = addend(last,6);
	last = addafter(last,4,12);
	traverse(last);
	return 0;
}
