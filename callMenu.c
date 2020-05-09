#include "callMenu.h"


void callMenu(){

	int n,m1,m2;
	scanf("%d", &n);

	switch(n)
	{

		case 0: printf("Program terminated.\n"); break;

		case 1: printf("The sequence number of the newly created list is: %d", count+1);
			printf("\nEnter key value to be inserted in the newly created list-%d:",count+1);
			scanf("%d", &m1);
			createList(arr,list_head,m1) ;
			printMenu() ; 
			callMenu(); break ;
	
		case 2: printf("List you want to insert in:");
			scanf("%d", &m1);
			printf("Enter the key value:");
			scanf("%d", &m2);
			printf("\n");
			insert(arr,list_head,m1,m2) ;
			printMenu() ; 
			callMenu(); break ;

		case 3: printf("List you want to delete from:");
			scanf("%d", &m1);
			printf("Enter the key value:");
			scanf("%d", &m2);
			printf("\n");
			delete(arr,list_head,m1,m2) ;
			printMenu() ; 
			callMenu(); break;

		case 4: printf("Total number of nodes in all lists are %d\n", countTotal(arr,list_head));
			printMenu() ; 
			callMenu(); break;

		case 5: printf("Enter the list number:");
			scanf("%d", &m1);
			printf("Total number of nodes in list %d are %d\n", m1, countList(arr,list_head,m1));
			printMenu() ; 
			callMenu(); break;

		case 6: displayAll(arr,list_head);
			printMenu() ; 
			callMenu(); break;

		case 7: displayFree(arr);
			printMenu() ; 
			callMenu(); break;

		case 8: defrag(arr,list_head);
			printMenu() ; 
			callMenu(); break;


	}
}

