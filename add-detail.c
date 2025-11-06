#include<stdio.h>
#include<stdlib.h>
struct st 
{
	int roll;
	char name[20];
	float mark;
	struct st * next;
};
void add_begin(struct st **);
void print(struct st *);
void delete_record1(struct st **,int);
void delete_record2(struct st **,char[20]);
void delete_record3(struct st **,float);
void delete_all_record(struct st *);
void reverse_detail(struct st **);
int count(struct st *);
void save(struct st *);
void sorting(struct st **);
void modify_record(struct st **);
/*int main()
{
	struct st *hptr=0;
	char op;
	while(1)
	{
		scanf(" %c",&op);
		if((op=='A')||(op=='a'))
		{
			add_begin(&hptr);
		}
		else if((op=='S')||(op=='s'))
		{
			printf("STUDENTS DETAILS \n");
			print(hptr);
		}
		else if((op=='E')||(op=='e'))
			return 0;
	}
}*/
void add_begin(struct st **ptr)
{
	struct st *temp;
	temp=(struct st *)malloc(sizeof(struct st));
	printf("ENTER STD ROLL NO, NAME, MARK \n");
	scanf("%d %s %f ",&temp->roll,temp->name,&temp->mark);
	temp->next=*ptr;
	*ptr=temp;
}
void print(struct st * ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
}
