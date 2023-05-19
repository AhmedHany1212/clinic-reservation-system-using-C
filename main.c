#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
void adminmode();
void usermode();
node head;
int main(void)
{
	u8 input,ExitFlag = 0;
		while (ExitFlag == 0)
	{
		printf("If you want admin mode prss 1\n ");
		printf("If you want user mode prss 2\n ");
		printf("To exit press to 3\n");
		scanf("%d",&input);
		
		switch (input)
		{
			case 1 : adminmode(); break;
			case 2 : usermode(); break;
			case 3 : printf("Thank You\nGood Bye"); ExitFlag = 1; break;
			default: printf("Invalid Choice please try again\n"); break;
		}

		
    }
}