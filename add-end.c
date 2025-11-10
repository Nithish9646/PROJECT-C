#include "header.h"
static int coun=1;
void add_end(struct st **ptr,int* new1, int*wel)
{
	struct st *temp;
	printf("ENTER THE NAME AND MARKS OF A STUDENT\n");
	temp=(struct st *)malloc(sizeof(struct st ));
	if(*wel==0)
	{
	temp->roll=coun;
	coun++;
	}
	else
	{
		temp->roll=*new1;
		*wel=0;
	}

	scanf("%s %f",temp->name,&temp->mark);
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		struct st *last=*ptr;
		while(last->next!=0)
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}
