#include "header.h"
void num_sort(struct st **ptr)
{
	int c,i,iroll,j;
	char cname[20];
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
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
				if(p[i]->roll>p[j]->roll)
				{
					iroll=p[i]->roll;
					p[i]->roll=p[j]->roll;
					p[j]->roll=iroll;
					strcpy(cname,p[i]->name);
					strcpy(p[i]->name,p[j]->name);
					strcpy(p[j]->name,cname);
					fmark=p[i]->mark;
					p[i]->mark=p[j]->mark;
					p[j]->mark=fmark;
				}
		}
	}
}
