#include "header.h"
int count(struct st *ptr)
{
	int count=0;
	while(ptr!=0)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}
