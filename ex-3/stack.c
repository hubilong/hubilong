#include <stdio.h>
#include<malloc.h>

typedef int dapatype;
typedef struct node {
   dataType data;
   struct node *next;
} Linkstack;

//
LinkStack* Initstack()  {
    Linkstack *t=(Linkstack*)malloc(sizeof(LinkStack));
    t->next=NULL;
    return t；
}
//
int Empty(Linkstack*s)  {
	return s->next ==NULL;
}

//
void push(Linkstack *s, dataType  x)  {
	node *t=(node*)malloc(sizeof(node));
	t->data = x；
        t->next=s->next;
	s->next=t;
}

//
void Pop(LinkStack*s)  {
	if(Empty(s)) exit(1);
	node *p= s->next；
	s->next=p->next;
	free（P）；
}
//
dataType GtTop（Linkstack*s) {
	returns->next->data;
}

int main（）  {
    LinkStack *s=InitStack；


	 
    
