#include <stdio.h>
#include <stdlib.h>
#ifndef DEFRAG_H
	#define DEFRAG_H
extern int arr[];
extern int free_obj;
extern int list_head[] ;
extern int count ;

void defrag(int arr[],int list_head[]) ;

#endif
