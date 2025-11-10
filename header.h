#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct st 
{
	int roll;
	char name[20];
	float mark;
	struct st * next;
};

void add_end(struct st **,int *, int *);
void delete_record1(struct st **,int,int *, int *);
void delete_record2(struct st **,char[20],int*,int*);
void delete_all_record(struct st **);
void reverse_detail(struct st *);
int count(struct st *);
void save(struct st *);
void sorting(struct st **);
void modify_record(struct st **);
void show(struct st *);
void num_sort(struct st **ptr);
