#include "header.c"
void sorting(struct st**ptr)
{
	int i,j,c,n,iroll;
	char cname[20];
	float fmark;
	c=count(*ptr);
	printf("press 1)roll 2)name 3)mark\n");
	scanf("%d",&n);
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
			if(n==1)
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
			else if(n==2)
			{
				if((strcmp(p[i]->name,p[j]->name))>0)
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
			else if(n==3)
			{
				if(p[i]->mark>p[j]->mark)
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
			else
				printf("INVALID\n");

		}
	}

}
