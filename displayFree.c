#include "displayFree.h"

void displayFree(int arr[]){
	
	int i;
	printf("Elements of free list are:\n[");
	printf("%d", free_obj);
	for(i=free_obj+1; arr[i]!=0; i=arr[i]+1){
		 printf(",%d",arr[i]) ;
	}
	
	printf("]\n");
	
}
	
