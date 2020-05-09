#include "delete.h"

void delete(int arr[],int list_head[],int n, int m){

		int i;
		for(i= list_head[n] ; arr[i+1]!= 0; i=arr[i+1]){
			
			if(i == list_head[n]){  
			
				if(arr[i]==m && arr[i+1]==0){     //deleting first element when it is the only element in the list		
					int temp= free_obj ;
					free_obj =i;
					list_head[n]= 0;
					arr[i+1]= temp;
					count-- ;
					printf("SUCCESS\n");
					return ;
					}
			 
			
			
			
			              if(arr[i] == m){            //deleting first element if it has key m
					int temp= free_obj ;
					free_obj= i;
					list_head[n]= arr[i+1] ;
					arr[i+1]= temp ;
					printf("SUCCESS\n");
					return ;
					}
					
				if(arr[i]!=m)
					continue ;
					
				
			}


				if(arr[i] == m){         //deleting element with key m
					int temp = free_obj;
					free_obj= i ;
					arr[arr[i+2]+1] = arr[i+1];
					arr[arr[i+1] +2]= arr[i+2]; ;
					arr[i +1] = temp;
					printf("SUCCESS\n");
					return ;
				}
				
			}
			
			if(arr[i+1]==0 && arr[i]==m){        //deleting last element if it has key m
					int temp= free_obj;
					free_obj= i ;
					arr[i+1]= temp ;
					arr[arr[i+2] +1]= 0;
					printf("SUCCESS\n");
					return ;
					}
					
					
					printf("FAILURE: ELEMENT NOT THERE / LIST EMPTY\n");
			                return ;
			
	}
			
			
