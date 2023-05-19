#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
void addrecord(u32 ,u32 , u32 , u32);
extern node head;
extern u32 len;
extern f32 r ;
extern f32 array[5];


void addslot(f32 r, u32 data)
{
		u32 i,w;		
		if (r!=2 && r!=2.5 && r!=3 && r!=3.5 && r!=4)
		{
			printf ("wrong sort");
			return;
		}
		for(i=0;i<5;i++)
		{
		    if (array[i]==0)
			{
			   array[i]=r;
			    break;

			}
		}
		w=0;
				for(i=0;i<5;i++)
		{
			if (array[i]==r)
			{
				w++;
	
			}
		}
		if (w>1)
		{
			printf("sorry this sort is not available\n");
			return;
		}

		node *prev = &head;
	   while((prev->data)!=data && len>0)
    	{
		  prev=prev->next;
	    	len--;
     	}
	  if(len>0)
	  {
		  prev->sort=r;
		/*u32 i,w=0;		
		if (r!=2 && r!=2.5 && r!=3 && r!=3.5 && r!=4)
		{
			printf ("wrong sort");
			return;
		}
		for(i=0;i<5;i++)
		{
			if (array[i]==0)
			{
			array[i]=r;
			break;

			}
		}
				for(i=0;i<5;i++)
		{
			if (array[i]==r)
			{
				w++;
	
			}
		}
		if (w>1)
		{
			printf("sorry this sort is not available\n");
			return;
		}

		node *prev = &head;

	  if (len==0)
	  {
		  head.sort=r;
		  head.next=NULL;
		  
	  }
	  else
	  {
		  node*new=(node*)malloc(sizeof(node));
		  new->sort=r;
		  new->next=NULL;
			while((prev->next)!=NULL)
			{
				prev=prev->next;
			}
		prev->next=new;
	  }
	  len++;*/
		
	   } 
	    else
	   {
		 printf("not found\n");	 return;
    	}


}
void PrintLinkedList(void)
{
	if (len > 0)
	{
		node *prev = &head;
		u32 i = 1;
		
		printf("Node Number %d = %d\n", i,prev -> data);
	
		while ((prev -> next) != NULL)
		{
			i++;
			prev = prev -> next;
			printf("Node Number %d = %d\n", i,prev -> data);
		}
	}
	
	else
	{
		printf("List is Empty\n");
	}
	
}	
