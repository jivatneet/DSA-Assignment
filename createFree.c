#include "createFree.h"

void createFree(int arr[]){
	
	for(int i=1; i<496; i=arr[i+1]){
		arr[i+1]=i+3;
		}

	arr[499]=0;
	
	
}
