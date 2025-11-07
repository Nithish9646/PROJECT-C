#include "header.h"
void delete_record1(struct st **ptr,int n,int *new1, int *wel)
{
	struct st *temp,*prev;
	temp=*ptr;
	while(1)
	{
		if(temp->roll==n)
		{
			int c=0;
			*new1=n;
			c++;
			*wel=c;
			if(temp==*ptr)
				temp=(*ptr)->next;
			else
				prev->next=temp->next;

			free(temp);
			temp=NULL;
			return;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}
void delete_record2(struct st **ptr,char na[],int *new1, int *wel)
{
	struct st *temp,*prev;
	temp=*ptr;
	while(1)
	{
		if((strcmp(temp->name,na))==0)
		{
			int c=0;
			*new1=temp->roll;
			c++;
			*wel=c;
			if(temp==*ptr)
				temp=(*ptr)->next;
			else
				prev->next=temp->next;

			free(temp);
			temp=NULL;
			return;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}
/*
void delete_record3(struct st**ptr,float ma)
{
	struct st *temp,*prev;
	temp=*ptr;
	while(1)
	{
		if(temp->mark==ma)
		{
			if(temp==*ptr)
				temp=(*ptr)->next;
			else
				prev->next=temp->next;

			free(temp);
			temp=NULL;
			return;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}*/
