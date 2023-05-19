#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
f32 arr[10]= {0,0,0,0,0,0,0,0,0,0};
void addrecord(u32,u8[],u8[],u32);
void Editpatientrecord(u32);
void Reserveslot ();
void Cancelreservation(u32);

void adminmode(void)
{
	
	u32 a,age,ID; u8 name[10],gender[10], i,input,ExitFlag=0;
	for(i=1;i<=3;i++)
	{
		printf("please enter the password\n ");
		scanf("%d",&a);
		if(a==(1234)) 
		{
			printf("welcome to admin mode\n"); break;
			
		}
	}
	if (a!=(1234))
	{
		printf("sorry it is wrong password\n"); return;
	}
	while (ExitFlag == 0)
	{
		printf("To add new patient record enter 1\n");
		printf("To Edit patient record enter 2\n");
		printf("To Reserve a sort with the doctor enter 3\n");
		printf("To Cancel reservation enter 4\n");
		printf("To exit press to 5\n");
		scanf("%d",&input);
		
		switch (input)
		{
			case 1 : printf("Please Enter the name: ");
					 scanf(" %s",name);
					 printf("Please Enter the age: ");
					 scanf("%d",&age);
					 printf("Please Enter the gender: ");
					 scanf(" %s",gender);
					 printf("Please Enter the ID: ");
					 scanf(" %d",&ID);
					 addrecord(ID,name,gender,age);
					 printf("new patient record Thank You \n\n\n");
					 break;
			case 2 : printf("please enter ID");
	                 scanf("%d",&ID);
					 Editpatientrecord(ID); break;
			case 3 : Reserveslot(); break;
			case 4 : printf("Please Enter the ID: ");
			         scanf(" %d",&ID);
			         Cancelreservation(	ID); break;
			case 5 : printf("Thank You\nGood Bye\n"); ExitFlag = 1; break;
			default: printf("Invalid Choice please try again\n"); break;
		}
	}	


}
