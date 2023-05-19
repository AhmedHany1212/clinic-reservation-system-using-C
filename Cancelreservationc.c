#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
extern u32 len;

void Cancelreservation(u32 data)
{
	node *prev = &head;
	while((prev->data)!=data && len>0)
	{
		prev=prev->next;
		len--;
	}
	if(len>0)
	{
		u32 i=1;
		node *p= &head;
		node*q=NULL;
		while(p->next!=prev)
		{
			p=p -> next;
		}
		 q=p -> next;
         p -> next=q -> next;
         free(q);

		
	}
	else printf("not found\n");	
}