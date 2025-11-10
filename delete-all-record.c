#include "header.h"
void delete_all_record(struct st ** ptr)
{
	struct st *temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		free(temp);
		temp=NULL;
		(*ptr)=(*ptr)->next;
	}
}
