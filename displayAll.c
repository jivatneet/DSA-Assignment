#include "displayAll.h"

void displayAll(int arr[],int list_head[]){

	int i,j;
	for(i =1; i<=count; i++){
		printf("Elements of list-%d are:\n", i) ;
		printf("key   next   prev\n");
		
		if(arr[list_head[i]+1]==0){
		printf("%d     NIL     NIL\n",arr[list_head[i]]);
		}
		
		else printf("%d      %d     NIL\n",arr[list_head[i]],arr[list_head[i]+1]);
		
		
		for(j= arr[list_head[i]+1]; j!=0; j= arr[j+1]){
		
			if(arr[j+1]==0){
				printf("%d     NIL     %d\n",arr[j],arr[j+2]);
				}
				
			 else printf("%d      %d      %d\n",arr[j],arr[j+1],arr[j+2]) ;
				
		}
		
		printf("\n");
	}
}
			
