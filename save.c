#include "header.c"
void save(struct st *ptr)
{
	FILE *fp=fopen("STUDENT-DETAIL","w");
	while(ptr!=0)
	{
		fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	printf("STUDENT HISTORY FILE SAVED\n");
}

