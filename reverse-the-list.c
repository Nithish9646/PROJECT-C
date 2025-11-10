#include "header.h"
void reverse_detail(struct st *ptr)
{
	if(ptr!=0)
	{
		reverse_detail(ptr->next);
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);

	}
}
