#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
u32 len=0;
extern f32 arr[10];		

void addrecord(u32 data,u8 name[10] , u8 gender[10] , u32 age)
{				
		u32 i,w;
		for(i=0;i<10;i++)
		{
			if (arr[i]==0)
			{
			arr[i]=data;
			break;

			}
		}
		w=0;
		for(i=0;i<10;i++)
		{
			if (arr[i]==data)
			{
				w++;
	
			}
		}
		if (w>1)
		{
			printf("sorry this sort is not available\n");
			return;
		}

		node*prev=NULL;
	  if (len==0)
	  {
		  head.data=data;
		  head.name[10]=name[10];
		  head.gender[10]=gender[10];
		  head.age=age;
		  head.next=NULL;
		  
	  }
	  else
	  {
		  node*new=(node*)malloc(sizeof(node));
		  /*node*new=new->data=data; */
		  node *prev = &head;
		  new->data=data;
		  new->name[10]=name[10];
		  new->gender[10]=gender[10];
		  new->age=age;
		  new->next=NULL;
			while((prev->next)!=NULL)
			{
				prev=prev->next;
			}
		prev->next=new;
	  }
	  len++;

}

