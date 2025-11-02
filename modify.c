#include "header.c"
void modify_record(struct st **ptr)
{
	int rl,enter,nr,nn;
	char nm[20],mn[20],newname[20];
	float am,anm,nnm;
	struct st *temp,*last;
	temp=*ptr;
	printf("Enter 1)roll 2)name 3)mark\n");
	scanf("%d",&enter);
	if(enter==1)
	{
		printf("enter the roll no to change\n");
		scanf("%d",&rl);
		printf("enter the new roll no\n");
		scanf("%d",&nr);
		while(temp!=0)
		{
			if(temp->roll==rl)
			{
				last=*ptr;
					while(last!=0)
				{
					if(last->roll==nr)
					{
						printf("THIS ROLL NUM IS ALREADY PRESENTS\n");
						printf("so enter some other roll num\n");
						scanf("%d",&nn);
						temp->roll=nn;
						printf("ROLL NO is updated successfully\n");
						return;
					}
					last=last->next;
				}
				temp->roll=nr;
				printf("roll no is successfully updated \n");
				return;
			}
				temp=temp->next;
		}
		printf("INVALID DATA\n");
	}

	if(enter==2)
	{
		printf("enter the name change\n");
		scanf("%s",nm);
		printf("enter the new name \n");
		scanf("%s",mn);
		while(temp!=0)
		{
			if((strcmp(temp->name,nm))==0)
			{
				last=*ptr;
					while(last!=0)
				{
					if((strcmp(last->name,mn))==0)
					{
						printf("THIS NAME IS ALREADY PRESENTS\n");
						printf("so enter some other roll num\n");
						scanf("%s",newname);
						strcpy(temp->name,newname);
						printf("name is updated successfully\n");
						return;
					}
					last=last->next;
				}
				strcpy(temp->name,mn);
				printf("name is successfully updated \n");
				return;
			}
				temp=temp->next;
		}
		printf("INVALID DATA\n");
	}

	else if(enter==3)
	{
		printf("enter the roll no to change\n");
		scanf("%f",&am);
		printf("enter the new roll no\n");
		scanf("%f",&anm);
		while(temp!=0)
		{
			if(temp->mark==am)
			{
				last=*ptr;
					while(last!=0)
				{
					if(last->mark==anm)
					{
						printf("THIS MARK IS ALREADY PRESENTS\n");
						printf("so enter some other marks\n");
						scanf("%f",&nnm);
						temp->roll=nnm;
						printf("Mark is updated successfully\n");
						return;
					}
					last=last->next;
				}
				temp->mark=anm;
				printf("mark is successfully updated \n");
				return;
			}
				temp=temp->next;
		}
		printf("INVALID DATA\n");
	}
}
