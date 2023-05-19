#include <string.h>
#include"stdtypedef.h"
typedef struct node node ;
struct node
	{
		u32 data;
		f32 sort;
		u32 age;
		u8 name[10];
		u8 gender[10];
		node*next;
	};