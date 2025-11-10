#include "header.h"
void sorting(struct st*ptr)
{
	int i,j,c,n,iroll;
	char cname[20],op;
	float fmark;
	c=count(ptr);
	struct st *temp=ptr;
	struct st p[c];
	for(i=0;i<c;i++)
	{
		p[i]=*temp;
		p[i].next=NULL;
		temp=temp->next;
	}
	printf("* * * * * * * * * * * * * * * * *\n");
	printf("*                               *\n");
	printf("*    P/p : SORT BY NAME         *\n");
	printf("*    N/n : SORT BY MARK         *\n");
	printf("*                               *\n");
	printf("* * * * * * * * * * * * * * * * *\n\n");
	printf("ENTER YOUR CHOICE : ");
	scanf(" %c",&op);
	printf("\n");
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if((op=='P')||(op=='p'))
			{
				if((strcmp(p[i].name,p[j].name))>0)
				{
					struct st temp1=p[i];
					p[i]=p[j];
					p[j]=temp1;
				}
			}
			else if((op=='N')||(op=='n'))
			{
				if(p[i].mark<p[j].mark)
				{
					struct st temp1=p[i];
					p[i]=p[j];
					p[j]=temp1;
				}
			}
			else
				printf("INVALID\n");

		}
	}
	printf("ROLL.NO  \tNAME\t\tMARK\n");
        for(i=0;i<c;i++)
	{
		printf("%d\t\t%-10s\t%.2f\n",p[i].roll,p[i].name,p[i].mark);
	}
	return ;
}
