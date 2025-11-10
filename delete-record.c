#include "header.h"
void delete_record1(struct st **ptr,int n,int *new1, int *wel)
{
	struct st *temp,*prev,*temp1;
	temp=*ptr;
	temp1=*ptr;
	int k=0;
	while(temp1!=0)
	{
		if(k==0)
			printf("ROLL.NO\tNAME\tMARKS\n");
		k++;
		if(temp1->roll==n)
		{
			printf("%d\t%-10s\t%.2f\n",temp1->roll,temp1->name,temp1->mark);
		}
		temp1=temp1->next;
	}
	char g;
	printf("\tDO YOU WANTS TO DELETE IT IF(y/n) : ");
	scanf(" %c",&g);
	if((g=='y')||(g=='Y'))
	{
		while(temp!=0)
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
				printf("\t****DELETED SUCCESSFULLY****\n");
				return;
			}
			else
			{
				prev=temp;
				temp=temp->next;
			}
		}
		printf("\t***INVALID ROLL.NO***\n");
	}
	else
		return;
}
void delete_record2(struct st **ptr,char na[],int *new1, int *wel)
{
	struct st *temp,*prev,*temp1,*temp2;
	temp=*ptr;
	temp1=*ptr;
	temp2=*ptr;
	int n=0,r=0;
	while(temp1!=0)
	{
		if(n==0)
			printf("ROLL.NO\tNAME\tMARKS\n");
		n++;
		if((strcmp(temp1->name,na))==0)
		{
			r++;
			printf("%d\t%-10s\t%.2f\n",temp1->roll,temp1->name,temp1->mark);
		}
		temp1=temp1->next;
	}
	if(r==1)
	{
		char g;
		printf("\tDO YOU WANTS TO DELETE IT IF(y/n) : ");
		scanf(" %c",&g);
		if((g=='y')||(g=='Y'))
		{
			while(temp!=0)
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
					printf("\t****DELETED SUCCESSFULLY****\n");
					return;
				}
				else
				{
					prev=temp;
					temp=temp->next;
				}
			}
		printf("\t***INVALID ROLL.NO***\n");
		}
		else
			return;
	}
	else if(r>1)
	{
		int k,l=0;
		printf("ENTER THE ROLL.NO TO DELETE : ");
		scanf("%d",&k);
		printf("\n");
	while(temp2!=0)
	{
		if(l==0)
			printf("ROLL.NO\tNAME\tMARKS\n");
		l++;
		if(temp2->roll==k)
		{
			printf("%d\t%-10s\t%.2f\n",temp2->roll,temp2->name,temp2->mark);
		}
		temp2=temp2->next;
	}
		char g;
		printf("\tDO YOU WANTS TO DELETE IT IF(y/n) : ");
		scanf(" %c",&g);
		if((g=='y')||(g=='Y'))
		{
			while(temp!=0)
			{
				if(temp->roll==k)
				{
					int c=0;
					*new1=k;
					c++;
					*wel=c;
					if(temp==*ptr)
						temp=(*ptr)->next;
					else
						prev->next=temp->next;

					free(temp);
					temp=NULL;
					printf("\t****DELETED SUCCESSFULLY****\n");
					return;
				}
				else
				{
					prev=temp;
					temp=temp->next;
				}
			}
		printf("\t***INVALID ROLL.NO***\n");
		}
		else
			return;
	}
}
