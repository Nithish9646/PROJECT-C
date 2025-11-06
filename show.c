#include "header.c"
void show(struct st * ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
}
