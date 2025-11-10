#include "header.h"
void show(struct st * ptr)
{
	if(ptr==0)
	{
		printf("****THERE IS NO STUDENT DETAILS***");
		return;
	}
	printf("-------------------------------------------------\n");
	printf("|              STUDENTS DATABASE                |\n");
	printf("-------------------------------------------------\n");
	printf("| ROLL.NO\t|\tNAME\t|\tMARK    |\n");
        //printf("* * * * * * * * * * * * * * * * * * * * * * * * * \n");
        printf("-------------------------------------------------\n");	
	while(ptr!=0)
	{
	printf("| %d\t\t%-10s\t\t%.2f   |\n",ptr->roll,ptr->name,ptr->mark);

       printf("------------------------------------------------- \n");	
		ptr=ptr->next;
	}
       //printf("- - - - - - - - - - - - - - - - - - - - - - - - - \n");	
}
