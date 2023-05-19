#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
extern u32 len;


void viewrecord(u32 data)
{
		u32 i;
		node *prev = &head;
		u8 name2[10],gender2[10];
		u32 age2;

	while((prev->data)!=data && len>0)
	{
		prev=prev->next;
		len--;
	}
		name2[10]=prev->name[10];
		gender2[10]=prev->gender[10];
		age2=prev->age;
	if(len>0)
	{
				 printf(" the age is %d \n ",age2 );
	        	printf(" the name is %s  \n ",name2);   
		        printf(" the gender is %s  \n ",gender2);
		       printf("the sort is %f\n",prev -> sort);				
		
	} 
	else 
	{
		printf("not found\n");	
	}

}