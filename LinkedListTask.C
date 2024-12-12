#include<stdio.h>
#include<stdlib.h>

struct Node
{
 int data;
 struct Node *link;
};

int main()
{
	struct Node *p, *temp, *r;
	p = NULL;

	//First Node
	temp =(struct Node*) malloc(sizeof(struct Node));
	temp->data = 10;
	temp->link = NULL;
	p = temp;

	temp =(struct Node*) malloc(sizeof(struct Node));
	temp->data = 20;
	temp->link = NULL;
	p->link = temp;

    //3rd Node
    temp =(struct Node*) malloc(sizeof(struct Node));
    temp->data = 30;
    temp->link = NULL;
    r= p;
    while(r->link!=NULL)
       {
	    r = r->link;
       }
    p->link->link=temp;
    while(p!=NULL)
	{
       printf("Node: %i \t %u\n", p->data, p->link);
       p=p->link;
    }
}