#include "countList.h"

int countList(int arr[],int list_head[],int n){

	int i;
	int count_ele=0;
	for(i= list_head[n]; i!= 0; i= arr[i+1]){
		count_ele++ ;
		}
		
	return count_ele ;
}
