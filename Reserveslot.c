#include<stdio.h>
#include <string.h>
#include"stdtypedef.h"
#include"linkedlist.h"
#include<stdlib.h>
extern node head;
extern u32 len;
f32 r;
f32 array[5]= {0,0,0,0,0};
void addslot(f32,u32);
void Reserveslot(void)
{
	
	u32 id;
	printf("please enter ID");
	scanf("%d",&id);
	printf("there are  5 sorts\n");
	printf("to reserve from 2 to 2:30 enter 2\n ");
	printf("to reserve from 2:30 to 3 enter 2.5 \n");
	printf("to reserve from 3 to 3:30 enter 3 \n");
	printf("to reserve from 3:30 to 4 enter 4\n");
	printf("to reserve from 4 to 4:30 enter 4.5\n");
	printf("please enter the soRt you want\n");
	scanf("%f",&r);
	addslot(r,id);
}