#include "header.c"
void add_begin(struct st **ptr)
{
	struct st *temp;
	temp=(struct st *)malloc(sizeof(struct st));
	printf("ENTER STD ROLL NO, NAME, MARK \n");
	scanf("%d %s %f ",&temp->roll,temp->name,&temp->mark);
	temp->next=*ptr;
	*ptr=temp;
}
