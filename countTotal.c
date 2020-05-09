#include "countTotal.h"

int countTotal(int arr[],int list_head[]){
	
	int i,j;
	int count_tot=0;
	for(i =1; i<=count ; i++){
	
		int count_ele=0;
		for(j= list_head[i]; arr[j+1]!= 0; j= arr[j+1]){
		count_ele++ ;
		}
		count_ele++;
		count_tot=count_tot + count_ele ;
	}
	
	return count_tot ;
}
		
		
