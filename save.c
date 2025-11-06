#include "header.c"
void save(struct st *ptr)
{
	FILE *fp=fopen("STUDENT-DETAIL","a+");
	while(ptr!=0)
	{
		fprintf(fp,"%d\t\t%s\t%f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	printf("STUDENT HISTORY FILE SAVED\n");
}

