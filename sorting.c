#include "header.h"
void sorting(struct st**ptr)
{
	int i,j,c,n,iroll;
	char cname[20],op;
	float fmark;
	c=count(*ptr);
	struct st *temp=*ptr;
	struct st **p;
	p=(struct st **)malloc(c*sizeof(struct st *));
	for(i=0;i<c;i++)
	{
		p[i]=temp;
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
				if((strcmp(p[i]->name,p[j]->name))>0)
				{
					//iroll=p[i]->roll;
					//p[i]->roll=p[j]->roll;
					//p[j]->roll=iroll;
					strcpy(cname,p[i]->name);
					strcpy(p[i]->name,p[j]->name);
					strcpy(p[j]->name,cname);
					fmark=p[i]->mark;
					p[i]->mark=p[j]->mark;
					p[j]->mark=fmark;
				}
			}
			else if((op=='N')||(op=='n'))
			{
				if(p[i]->mark<p[j]->mark)
				{
					//iroll=p[i]->roll;
					//p[i]->roll=p[j]->roll;
					//p[j]->roll=iroll;
					strcpy(cname,p[i]->name);
					strcpy(p[i]->name,p[j]->name);
					strcpy(p[j]->name,cname);
					fmark=p[i]->mark;
					p[i]->mark=p[j]->mark;
					p[j]->mark=fmark;
				}
			}
			else
				printf("INVALID\n");

		}
	}
	show(*ptr);
	return ;
}
