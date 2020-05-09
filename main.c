/*Each node occupies three consecutive array indices,key,next and prev. If Next or Prev are NULL, it is represented by their value being set as'0'*/

#include <stdio.h>
#include "callMenu.h"
int arr[500];           //array used to store multiple doubly linked lists
int free_obj;	    //stores index of the first key node of the free list
int list_head[10];
int count ;

int main(){
	
	free_obj=1 ;   //free list starts from index 1
	int count=0 ;
	
	createFree(arr);
	printMenu();
	callMenu() ;

return 0;
}
