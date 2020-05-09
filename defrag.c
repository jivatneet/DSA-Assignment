#include "defrag.h"

void defrag(int arr[],int list_head[]){
	
	int i,j;
	int k=1;
	int n,m,l,b,c;
	int dup[500];
	
	
	for(i=1; i<=count; i++){
		
		int temp=list_head[i] ;
		list_head[i]=k;
		

		for(j=temp,k ;arr[j+1]!=0  ;j=arr[j+1],k=k+1){
			dup[k]=arr[j] ;
			}
			
		if(arr[j+1]==0){
			dup[k]=arr[j];
			k++;
			n=k ;
		}
	}
		
	
		int temp1=free_obj ;
		free_obj =n;
		for(i=temp1,n;arr[i+1]!=0;i=arr[i+1],n=n+1){
			dup[n]=i;
			m=n ;
			}
		int a;	
		if(arr[i+1]==0){
			dup[m+1]=i;
			a=(m+1)*3;
		}
		
	
		
		list_head[1]=1;

			for(k=2; k<=count; k++){
		    	list_head[k]=(list_head[k]*3) -2;
		    	}
		
		b=1;
			for(k=1; k<count;k++){   		
			for(i=list_head[k],b; i<list_head[k+1]; i=i+3,b++){
					arr[i]=dup[b];
					arr[i+1]=i+3;
					arr[i+2]=i-3;
					if(i==list_head[k])
						arr[i+2]=0;
					}
					arr[i-2]=0;
					l=b ;
				}
				
			arr[3]=0;
			free_obj=(free_obj*3)-2;
			
			if(k==count){
				for(i=list_head[count],l; i<free_obj; i=i+3,l++){
					arr[i]=dup[l];
					arr[i+1]=i+3;
					arr[i+2]=i-3;
					}
					arr[i-2]=0;
				}
					
			
			for(i=free_obj,l; i<=a ;i=i+3,l++){
				arr[i+1]=dup[l+1];
		
				}
				
		
			arr[497]=0;
			
			
			
				
			
		printf("SUCCESS\n");
		}
			
