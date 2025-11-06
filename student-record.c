#include "header.c"
int main()
{
	struct st *hptr=0;
	char op;
	while(1)
	{
	printf("\n");
	printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t\t\t\t*                                                                       *\n");
	printf("\t\t\t\t\t*                    * * * * STUDENT RECORD MENU * * * *                *\n");
	printf("\t\t\t\t\t*                            ____________________                       *\n");
	printf("\t\t\t\t\t*                                                                       *\n");
	printf("\t\t\t\t\t*                        A/a    : Add New Record  		        *\n");
	printf("\t\t\t\t\t*                        D/d    : Delete A Record                       *\n");
	printf("\t\t\t\t\t*                        S/s    : Show The List                         *\n");
	printf("\t\t\t\t\t*                        M/m    : Modify A record                       *\n");
	printf("\t\t\t\t\t*                        V/v    : Save                                  *\n");
	printf("\t\t\t\t\t*                        E/e    : Exit                                  *\n");
	printf("\t\t\t\t\t*                        T/t    : Sort The List                         *\n");
	printf("\t\t\t\t\t*                        L/l    : Delete All The Records                *\n");
	printf("\t\t\t\t\t*                        R/r    : Reverse The List                      *\n");
	printf("\t\t\t\t\t*                                                                       *\n");
	printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");



		printf("ENTER YOUR CHOISE : ");
		scanf(" %c",&op);
		if((op=='A')||(op=='a'))
		{
			char c;
			do
			{
			add_end(&hptr);
			printf("DO YOU WANT TO ADD DETAIL(y/n) : ");
			scanf(" %c",&c);
			}while(c=='y');
			system("clear");
		}
		else if((op=='S')||(op=='s'))
		{
			printf("STUDENTS DETAILS \n");
			show(hptr);
			system("clear");
		}
		else if((op=='E')||(op=='e'))
		{
			printf("STUDENT FILE EXITED\n");
			system("clear");
			return 0;
		}
		else if((op=='D')||(op=='d'))
		{
			char del;
			int n;
			char per[20];
			float mar;
			printf("* * * * * * * * * * * * * * * * * * * * * *\n");
			printf("*                                         *\n");
			printf("*    R/r : Enter Rollno to Delete         *\n");
			printf("*    N/n : Enter The Name to Delete       *\n");
			printf("*                                         *\n");
			printf("* * * * * * * * * * * * * * * * * * * * * *\n\n");
			printf("ENTER YOUR CHOICE : ");
			scanf(" %c",&del);
			if((del=='r')||(del=='R'))
					{
						printf("enter the roll no to delete\n");
						scanf("%d",&n);
						delete_record1(&hptr,n);
						show(hptr);
					}
			else if((del=='n')||(del=='N'))
					{
						printf("enter the name to delete\n");
						scanf("%s",per);
						delete_record2(&hptr,per);
						show(hptr);
					}
			system("clear");
			}
		else if((op=='L')||(op=='l'))
		{
			delete_all_record(hptr);
			system("clear");
		}
		else if((op=='r')||(op=='R'))
		{
			reverse_detail(hptr);
			system("clear");
		}
		else if((op=='V')||(op=='v'))
		{
			save(hptr);
			system("clear");
		}
		else if((op=='T')||(op=='t'))
		{
			sorting(&hptr);
			system("clear");
		}
		else if((op=='M')||(op=='m'))
		{
			modify_record(&hptr);
			system("clear");
		}
	}

       printf("\n");
}
