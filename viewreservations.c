#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
extern u32 len;


void viewreservations(void)
{
	if (len > 0)
	{
		node *prev = &head;
		u32 i = 1;
		printf("name Number %d = %s\n", i,head.name);
		printf("gender Number %d = %s\n", i,head.gender);		
		printf("ID Number %d = %d\n", i,prev -> data);
		printf("age Number %d = %d\n", i,prev -> age);
		printf("sort Number %d = %f\n", i,prev -> sort);
		
	
		while ((prev -> next) != NULL)
		{
			i++;
			prev = prev -> next;
		printf("name Number %d = %s\n", i,prev -> name);
		printf("gender Number %d = %s\n", i,prev -> gender);		
		printf("ID Number %d = %d\n", i,prev -> data);
		printf("age Number %d = %d\n", i,prev -> age);
		printf("sort Number %d = %f\n", i,prev -> sort);
		
		}
	}
	
	else
	{
		printf("List is Empty\n");
	}
	
}	
