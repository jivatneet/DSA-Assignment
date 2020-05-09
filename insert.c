#include "insert.h"

void insert(int arr[],int list_head[],int n, int m){
	
	int j;
	int i=list_head[n] ;
	if(free_obj == 0){
		printf("FAILURE: MEMORY NOT AVAILABLE\n");	 
		return ;
		}

	
	if(i == list_head[n]){
	
				if( i == 0){        //insering element in empty list
					arr[free_obj]=m;
					list_head[n]=free_obj;
					int temp= free_obj;
					free_obj=arr[free_obj+1];
					arr[temp +1]=0;
					arr[temp +2]=0;
					count++ ;
					printf("SUCCESS\n");
					return ;
					}
					
		
				if(arr[i]>=m && arr[i+1]==0){ //insering element at the first position when there is only one element in the list
					arr[free_obj] =m;
					list_head[n]=free_obj ;
					int temp= free_obj ;
					free_obj= arr[free_obj+1] ;
					arr[temp +1]=i;
					arr[temp +2]=0;
					arr[i+2]= temp ;
					printf("SUCCESS\n");
					return;
					}
					           
				if (arr[i]>=m){            //inserting element in sorted order at beginning 
					arr[free_obj]=m ;
					list_head[n]= free_obj;
					int temp =free_obj;
					free_obj = arr[free_obj +1] ;
					arr[temp +1]= i;
					arr[temp +2]= 0 ;
					arr[i +2]= temp ;
					printf("SUCCESS\n");
					return ;
					}
				
					
				if(arr[i]<=m && arr[i+1]==0){   //insering element at the second position when there is only one element in the list
					
					arr[free_obj] =m;
					int temp= free_obj ;
					free_obj= arr[free_obj +1];
					arr[temp+1]=0;
					arr[temp+2]=i;
					arr[i+1]=temp;
					printf("SUCCESS\n");
					return;
					
				}
				
	if(arr[i]<=m){
				
		 
		for(j=arr[list_head[n]+1] ; arr[j+1]!= 0; j=arr[j+1]){ 
			                  
				
				if(arr[j] >= m){
     
					arr[free_obj]=m;     //insering element in sorted order in middle
					int temp= free_obj;
					free_obj= arr[free_obj +1] ;
					arr[temp +1] = j ;
					arr[temp +2] = arr[j+2] ;
					arr[arr[j+2] +1] = temp ;
					arr[j+2] = temp ;
	
				printf("SUCCESS\n");
				return ;
			}
		}


			if(arr[j] >= m && arr[j+1]==0){
     
					arr[free_obj]=m;     //insering element in sorted order in second last
					int temp= free_obj;
					free_obj= arr[free_obj +1] ;
					arr[temp +1] = j ;
					arr[temp +2] = arr[j+2] ;
					arr[arr[j+2] +1] = temp ;
					arr[j+2] = temp ;
	
				printf("SUCCESS\n");
				return ;
				}
				
			if(arr[j]<=m && arr[j+1] == 0){          //insering element in sorted order at the end
				
					arr[free_obj] =m;
					int temp =free_obj;
					arr[j+1] = temp ;
					free_obj= arr[free_obj +1];
					arr[temp +1] =0;
					arr[temp +2] = j ;

				printf("SUCCESS\n");
				return ;
			}
		
		}	
	}
}
					
					
					
					
				
			
