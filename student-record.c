#include "header.c"
int main()
{
	printf("\n");
	printf("                                              * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("                                              *                                                                       *\n");
	printf("                                              *                    * * * * STUDENT RECORD MENU * * * *                *\n");
	printf("                                              *                            ____________________                       *\n");
	printf("                                              *                                                                       *\n");
	printf("                                              *                        A/a    : Add New Record  		      *\n");
	printf("                                              *                        D/d    : Delete A Record                       *\n");
	printf("                                              *                        S/s    : Show The List                         *\n");
	printf("                                              *                        M/m    : Modify A record                       *\n");
	printf("                                              *                        V/v    : Save                                  *\n");
	printf("                                              *                        E/e    : Exit                                  *\n");
	printf("                                              *                        T/t    : Sort The List                         *\n");
	printf("                                              *                        L/l    : Delete All The Records                *\n");
	printf("                                              *                        R/r    : Reverse The List                      *\n");
	printf("                                              *                                                                       *\n");
	printf("                                              * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");



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
		{
			printf("STUDENT FILE EXITED\n");
			return 0;
		}
		else if((op=='D')||(op=='d'))
		{
			int del,n;
			char per[20];
			float mar;
			printf("press 1)roll 2)name 3)mark 4)exit \n");
			scanf("%d",&del);
			switch(del)
			{
				case 1:
					{
						printf("enter the roll no to delete\n");
						scanf("%d",&n);
						delete_record1(&hptr,n);
						break;
					}
				case 2:
					{
						printf("enter the name to delete\n");
						scanf("%s",per);
						delete_record2(&hptr,per);
						break;
					}
				case 3:
					{
						printf("enter the mark to delete\n");
						scanf("%f",&mar);
						delete_record3(&hptr,mar);
						break;
					}
				default:printf("INVALID DATA\n");break;
			}
		}
		else if((op=='L')||(op=='l'))
			delete_all_record(hptr);
		else if((op=='r')||(op=='R'))
			reverse_detail(&hptr);
		else if((op=='V')||(op=='v'))
			save(hptr);
		else if((op=='T')||(op=='t'))
			sorting(&hptr);
		else if((op=='M')||(op=='m'))
			modify_record(&hptr);
	}

       printf("\n");
}
