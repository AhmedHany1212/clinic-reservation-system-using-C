#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
extern u32 s;
extern u32 len;

void searchnode(u32 data)

{
	node *prev = &head;
	while((prev->data)!=data && len>0)
	{
		prev=prev->next;
		len--;
	}
	if(len>0)
	{
		printf("found\n");
		s=1;
		
	} 
	else
	{
		printf("non found\n");	

	}
}
