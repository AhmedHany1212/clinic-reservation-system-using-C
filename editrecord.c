#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
u32 s;
extern u32 len;
void searchnode(u32 );
void editnode(u32 );
void Editpatientrecord(u32 ID)
{
	searchnode(ID);
	 if (s == 1 )
	 {
		editnode(ID);
	 }
	 else 
	 {
		 printf("incorrect ID");
		 
	 }
	
}


