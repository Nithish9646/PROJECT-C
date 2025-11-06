#include "header.c"
static int coun=1;
void add_end(struct st **ptr)
{
	struct st *temp;
	printf("ENTER THE NAME AND MARKS OF A STUDENT\n");
	temp=(struct st *)malloc(sizeof(struct st ));
	temp->roll=coun;
	coun++;
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
