#include "createList.h"

void createList(int arr[],int list_head[], int m){
		
		int temp=free_obj ;
		if(free_obj==0)
			printf("FAILURE: MEMORY NOT AVAILABLE\n");
		
		
		list_head[count+1]=free_obj;
		free_obj= arr[free_obj +1] ;
		arr[temp +2]= 0 ;
		arr[temp+1] =0;
		arr[list_head[count+1]]=m ;
		count++ ;
		printf("SUCCESS\n");
		return ;
		
}

	                                                                                   
	
	
	
