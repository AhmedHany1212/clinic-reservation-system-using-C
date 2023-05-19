#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
void viewrecord(u32 );
void viewreservations();
void usermode(void)
{
	u32 nid; u8 input,ExitFlag=0;
	while (ExitFlag == 0)
	{
		printf("To View patient record enter 1\n");
		printf("To View today reservations enter 2\n");
		printf("To exit press to 3\n");
		scanf("%d",&input);
		
		switch (input)
		{
			case 1 : printf("Please Enter the ID: ");
					 scanf("%d",&nid);
					 viewrecord(nid);
					 break;
			case 2 : viewreservations(); break;
			case 3 : printf("Thank You\nGood Bye\n"); ExitFlag = 1;  break;
			default: printf("Invalid Choice please try again\n"); break;
		}
	}	
}
