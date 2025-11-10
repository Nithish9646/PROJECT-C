#include "header.h"
void modify_record(struct st **ptr)

{
	if(*ptr==0)
	{
		printf("****THERE IS NO STUDENT RECORDS TO MODIFY****");
		return;
	}
	char enter;
	int rl;
	char newname[20],name[20];
	float newmark,mark;
	struct st *temp,*temp1;
	temp=*ptr;
	temp1=*ptr;
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t\t\t*                                       *\n");
	printf("\t\t\t\t*      R/r : To Search Rollno           *\n");
	printf("\t\t\t\t*      N/n : To Search Name             *\n");
	printf("\t\t\t\t*      P/p : Percentage Based           *\n");
	printf("\t\t\t\t*                                       *\n");
	printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * *\n\n");
	printf("\t\t\t\tENTER YOUR CHOICE : ");
	scanf(" %c",&enter);
	if((enter=='R')||(enter=='r'))
	{
		printf("ENTER THE ROLL NO : ");
		scanf("%d",&rl);
		while(temp!=0)
		{
			if(temp->roll==rl)
			{
				char op;
				printf("\t\t\t __________________________________\n");
				printf("\t\t\t|                                  |\n");
				printf("\t\t\t|   N/n : To Search by Name        |\n");
				printf("\t\t\t|   P/p : To Search by Percentage  |\n");
				printf("\t\t\t|__________________________________|\n\n");
				printf("\t\t\tENTER YOUR CHOICE : ");	
				scanf(" %c",&op);
				if((op=='N')||(op=='n'))
				{
					printf("\tENTER THE NAME TO MODIFY : ");
					scanf("%s",newname);
					strcpy(temp->name,newname);
					printf("\t***NAME MODIFED SUCCESSFULLY***\n\n");
				}
				else if((op=='P')||(op=='p'))
				{
					printf("\tENTER THE MARK TO MODIFY : ");
					scanf("%f",&newmark);
					temp->mark=newmark;
					printf("\t***MARK WAS SUCCESSFULLY MODIFIED***\n\n");
				}

			}
			temp=temp->next;
		}
		//printf("\t\t***INVALID DATA***\n");
	}

	else if((enter=='N')||(enter=='n'))
	{
		printf("\tENTER THE NAME : ");
		scanf("%s",name);
		printf("ROLL.NO\tNAMES\tMARKS\n");
		int num=0;
		while(temp!=0)
		{
			if((strcmp(temp->name,name))==0)
			{
				num++;
				printf("%d\t%-10s\t%.2f\n",temp->roll,temp->name,temp->mark);
			}
			temp=temp->next;
		}
		if(num>1)
		{
			char c;
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                       *\n");
			printf("\t\t\t\t*      R/r : To Search Rollno           *\n");
			printf("\t\t\t\t*      P/p : Percentage Based           *\n");
			printf("\t\t\t\t*                                       *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * *\n\n");
			printf("\t\t\t\tENTER YOUR CHOICE : ");
			scanf(" %c",&c);
			if((c=='r')||(c=='R'))
			{
				printf("\tENTER THE ROLL NO \n");
				scanf("%d",&rl);
				while(temp1!=0)
				{
					if(temp1->roll==rl)
					{
						char op;
						printf("\t\t\t __________________________\n");
						printf("\t\t\t|                          |\n");
						printf("\t\t\t|   N/n : To Search Name   |\n");
						printf("\t\t\t|   P/p : Percentage Based |\n");
						printf("\t\t\t|__________________________|\n\n");
						printf("\t\t\tENTER YOUR CHOICE : ");
						scanf(" %c",&op);
						if((op=='N')||(op=='n'))
						{
							printf("\tENTER THE NAME TO MODIFY : ");
							scanf("%s",newname);
							strcpy(temp1->name,newname);
							printf("\t\t***NAME MODIFED SUCCESSFULLY***\n\n");
						}
						else if((op=='P')||(op=='p'))
						{
							printf("\tENTER THE MARK TO MODIFY : ");
							scanf("%f",&newmark);
							temp1->mark=newmark;
							printf("\t\t***MARK WAS SUCCESSFULLY MODIFIED***\n\n");
						}
					}
					temp1=temp1->next;
				}
				//printf("\t\t***INVALID DATA***\n");
			}
			else if((c=='p')||(c=='P'))
			{
				printf("\tENTER THE MARK : ");
				scanf("%f",&mark);
				while(temp1!=0)
				{
					if(temp1->roll==mark)
					{
						char op;
						printf("\t\t\t __________________________\n");
						printf("\t\t\t|                          |\n");
						printf("\t\t\t|   N/n : To Search Name   |\n");
						printf("\t\t\t|   P/p : Percentage Based |\n");
						printf("\t\t\t|__________________________|\n\n");
						printf("\t\t\tENTER YOUR CHOICE : ");
						scanf(" %c",&op);
						if((op=='N')||(op=='n'))
						{
							printf("\tENTER THE NAME TO MODIFY : ");
							scanf("%s",newname);
							strcpy(temp1->name,newname);
							printf("\t\t***NAME MODIFED SUCCESSFULLY***\n\n");
						}
						else if((op=='P')||(op=='p'))
						{
							printf("\tENTER THE MARK TO MODIFY : ");
							scanf("%f",&newmark);
							temp1->mark=newmark;
							printf("\t\t***MARK WAS SUCCESSFULLY MODIFIED***\n\n");
						}
					}
					temp1=temp1->next;
				}
				//printf("\t\t***INVALID DATA***\n");
			}
		}
		else if(num==1)
		{
			while(temp1!=0)
			{
				if((strcmp(temp1->name,name))==0)
				{
					char op;
					printf("\t\t\t __________________________\n");
					printf("\t\t\t|                          |\n");
					printf("\t\t\t|   N/n : To modify Name   |\n");
					printf("\t\t\t|   P/p : Percentage Based |\n");
					printf("\t\t\t|__________________________|\n\n");
					printf("\t\t\tENTER YOUR CHOICE : ");
					scanf(" %c",&op);
					if((op=='N')||(op=='n'))
					{
						printf("\tENTER THE NAME TO MODIFY : ");
						scanf("%s",newname);
						strcpy(temp1->name,newname);
						printf("\t\t***NAME MODIFED SUCCESSFULLY***\n\n");
					}
					else if((op=='P')||(op=='p'))
					{
						printf("\tENTER THE MARK TO MODIFY : ");
						scanf("%f",&newmark);
						temp1->mark=newmark;
						printf("\t\t***MARK WAS SUCCESSFULLY MODIFIED***\n\n");
					}
				}
				temp1=temp1->next;
			}
			//printf("\t\t***INVALID DATA***\n");
		}
	}

	else if((enter=='P')||(enter=='p'))
	{
		printf("\tENTER THE MARK : ");
		scanf("%f",&mark);
		printf("ROLL.NO\tNAMES\tMARKS\n");
		int num=0;
		while(temp!=0)
		{
			if(temp->mark==mark)
			{
				num++;
				printf("%d\t%s\t%f\n",temp->roll,temp->name,temp->mark);
			}
			temp=temp->next;
		}
		if(num>1)
		{
			char c;
			printf("\t\t\t* * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t*                                       *\n");
			printf("\t\t\t*      R/r : To Search Roll             *\n");
			printf("\t\t\t*      P/p : To Search Name             *\n");
			printf("\t\t\t*                                       *\n");
			printf("\t\t\t* * * * * * * * * * * * * * * * * * * * *\n\n");
			printf("\t\t\tENTER YOUR CHOICE : ");
			scanf(" %c",&c);
			if((c=='r')||(c=='R'))
			{
				printf("\tENTER THE ROLL NO \n");
				scanf("%d",&rl);
				while(temp1!=0)
				{
					if(temp1->roll==rl)
					{
						char op;
						printf("\t\t\t __________________________\n");
						printf("\t\t\t|                          |\n");
						printf("\t\t\t|   N/n : To Search Name   |\n");
						printf("\t\t\t|   P/p : Percentage Based |\n");
						printf("\t\t\t|__________________________|\n\n");
						printf("\t\t\tENTER YOUR CHOICE : ");
						scanf(" %c",&op);
						if((op=='N')||(op=='n'))
						{
							printf("\tENTER THE NAME TO MODIFY : ");
							scanf("%s",newname);
							strcpy(temp1->name,newname);
							printf("\t\t***NAME MODIFED SUCCESSFULLY***\n\n");
						}
						else if((op=='P')||(op=='p'))
						{
							printf("\tENTER THE MARK TO MODIFY : ");
							scanf("%f",&newmark);
							temp1->mark=newmark;
							printf("\t\t***MARK WAS SUCCESSFULLY MODIFIED***\n\n");
						}
					}
					temp1=temp1->next;
				}
			//	printf("\t\t***INVALID DATA***\n");
			}
			else if((c=='p')||(c=='P'))
			{
				printf("\tENTER THE NAME : ");
				scanf("%s",name);
				while(temp1!=0)
				{
					if((strcmp(temp1->name,name))==0)
					{
						char op;
						printf("\t\t\t __________________________\n");
						printf("\t\t\t|                          |\n");
						printf("\t\t\t|   N/n : To Search Name   |\n");
						printf("\t\t\t|   P/p : Percentage Based |\n");
						printf("\t\t\t|__________________________|\n\n");
						printf("\t\t\tENTER YOUR CHOICE : ");
						scanf(" %c",&op);
						if((op=='N')||(op=='n'))
						{
							printf("\tENTER THE NAME TO MODIFY : ");
							scanf("%s",newname);
							strcpy(temp1->name,newname);
							printf("\t\t***NAME MODIFED SUCCESSFULLY***\n\n");
						}
						else if((op=='P')||(op=='p'))
						{
							printf("\tENTER THE MARK TO MODIFY : ");
							scanf("%f",&newmark);
							temp1->mark=newmark;
							printf("\t\t***MARK WAS SUCCESSFULLY MODIFIED***\n\n");
						}
					}
					temp1=temp1->next;
				}
			//	printf("\t\t***INVALID DATA***\n");
			}
		}
		else if(num==1)
		{
			while(temp1!=0)
			{
				if(temp1->mark==mark)
				{
					char op;
					printf("\t\t\t __________________________\n");
					printf("\t\t\t|                          |\n");
					printf("\t\t\t|   N/n : To Search Name   |\n");
					printf("\t\t\t|   P/p : Percentage Based |\n");
					printf("\t\t\t|__________________________|\n\n");
					printf("\t\t\tENTER YOUR CHOICE : ");
					scanf(" %c",&op);
					if((op=='N')||(op=='n'))
					{
						printf("\tENTER THE NAME TO MODIFY : ");
						scanf("%s",newname);
						strcpy(temp1->name,newname);
						printf("\t\t***NAME MODIFED SUCCESSFULLY***\n\n");
					}
					else if((op=='P')||(op=='p'))
					{
						printf("\tENTER THE MARK TO MODIFY : ");
						scanf("%f",&newmark);
						temp1->mark=newmark;
						printf("\t\t***MARK WAS SUCCESSFULLY MODIFIED***\n\n");
					}
				}
				temp1=temp1->next;
			}
			//printf("\t\t***INVALID DATA***\n");
		}

	}
}
