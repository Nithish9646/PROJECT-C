#include "header.c"
void reverse_detail(struct st **ptr)
{
	int i,c;
	c=count(*ptr);
	struct st *temp=*ptr;
	struct st **p;
	p=(struct st **)malloc(c*sizeof(struct st *));
	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<c;i++)
	{
		p[i]->next=p[i-1];
	}
	*ptr=p[c-1];
}
