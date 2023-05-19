#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
extern u32 len;

void editnode(u32 data)

{
	u8 name2[10],gender2[10];
	u32 age2;
	node *prev = &head;
	while((prev->data)!=data && len>0)
	{
		prev=prev->next;
		len--;
	}
	if(len>0)
	{
		 		 printf("Please Enter the name: ");
			     scanf(" %s",name2);
				 prev->name[10]=name2[10];
		     	 printf("Please Enter the age: ");
				 scanf("%d",&age2);
				 prev->age=age2;
				 printf("Please Enter the gender: ");
				 scanf(" %s",gender2);
				 prev->gender[10]=gender2[10];
		
	} 
	else 
	{
		printf("can not found\n");	
	}

}
