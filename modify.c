#include "header.c"
void modify_record(struct st **ptr)

{
	char enter;
	int rl;
	char newname[20],name[20];
	float newmark,mark;
	struct st *temp,*last;
	temp=*ptr;
	printf("* * * * * * * * * * * * * * * * * * * * *\n");
	printf("*                                       *\n");
	printf("*      R/r : To Search Rollno           *\n");
	printf("*      N/n : To Search Name             *\n");
	printf("*      P/p : Percentage Based           *\n");
	printf("*                                       *\n");
	printf("*         ENTER YOUR CHOICE              *\n");
	printf("*                                       *\n");
	printf("* * * * * * * * * * * * * * * * * * * * *\n");
	printf("ENTER YOUR CHOICE \n");
	scanf(" %c",&enter);
	if((enter=='R')||(enter=='r'))
	{
		printf("ENTER THE ROLL NO \n");
		scanf("%d",&rl);
		while(temp!=0)
		{
			if(temp->roll==rl)
			{
				char op;
				printf(" __________________________\n");
				printf("|                          |\n");
				printf("|   N/n : To Search Name   |\n");
				printf("|   P/p : Percentage Based |\n");
				printf("|                          |\n");
				printf("|    ENTER YOUR CHOICE     |\n");
				printf("|__________________________|\n"); 
				scanf(" %c",&op);
				if((op=='N')||(op=='n'))
				{
					printf("ENTER THE NAME TO MODIFY\n");
					scanf("%s",newname);
					strcpy(temp->name,newname);
					printf("NAME MODIFED SUCCESSFULLY\n");
					show(*ptr);
				}
				else if((op=='P')||(op=='p'))
				{
					printf("ENTER THE MARK TO MODIFY\n");
					scanf("%f",&newmark);
					temp->mark=newmark;
					printf("MARK WAS SUCCESSFULLY MODIFIED\n");
					show(*ptr);
				}

			}
				temp=temp->next;
		}
		printf("INVALID DATA\n");
	}

	else if((enter=='N')||(enter=='n'))
	{
		printf("ENTER THE NAME\n");
		scanf("%s",name);
		while(temp!=0)
		{
			if((strcmp(temp->name,name))==0)
			{
				char op;
				printf(" __________________________\n");
				printf("|                          |\n");
				printf("|   N/n : To Search Name   |\n");
				printf("|   P/p : Percentage Based |\n");
				printf("|                          |\n");
				printf("|    ENTER YOUR CHOICE     |\n");
				printf("|__________________________|\n"); 
				scanf(" %c",&op);
				if((op=='N')||(op=='n'))
				{
					printf("ENTER THE NAME TO MODIFY\n");
					scanf("%s",newname);
					strcpy(temp->name,newname);
					printf("NAME MODIFED SUCCESSFULLY\n");
					show(*ptr);
				}
				else if((op=='P')||(op=='p'))
				{
					printf("ENTER THE MARK TO MODIFY\n");
					scanf("%f",&newmark);
					temp->mark=newmark;
					printf("MARK WAS SUCCESSFULLY MODIFIED\n");
					show(*ptr);
				}

			}
				temp=temp->next;
		}
		printf("INVALID DATA\n");
	}

	else if((enter=='P')||(enter=='p'))
	{
		printf("ENTER THE MARK\n");
		scanf("%f",&mark);
		while(temp!=0)
		{
			if(temp->mark==mark)
			{
				char op;
				printf(" __________________________\n");
				printf("|                          |\n");
				printf("|   N/n : To Search Name   |\n");
				printf("|   P/p : Percentage Based |\n");
				printf("|__________________________|\n\n");
			       printf("ENTER YOUR CHOICE : ");	
				scanf(" %c",&op);
				if((op=='N')||(op=='n'))
				{
					printf("ENTER THE NAME TO MODIFY\n");
					scanf("%s",newname);
					strcpy(temp->name,newname);
					printf("NAME MODIFED SUCCESSFULLY\n");
					printf(" HERE THE MODIFIED LIST\n");
					show(*ptr);
				}
				else if((op=='P')||(op=='p'))
				{
					printf("ENTER THE MARK TO MODIFY\n");
					scanf("%f",&newmark);
					temp->mark=newmark;
					printf("MARK WAS SUCCESSFULLY MODIFIED\n");
					printf(" HERE THE MODIFIED LIST\n");
					show(*ptr);
				}
			}
				temp=temp->next;
		}
		printf("INVALID DATA\n");
	}
}
