#include <stdio.h>
#include <stdlib.h>
#ifndef CALL_H
	#define CALL_H
#include "createFree.h"
#include "printMenu.h"
#include "callMenu.h"
#include "createList.h"
#include "insert.h"
#include "delete.h"
#include "countTotal.h" 
#include "countList.h"
#include "displayAll.h"
#include "displayFree.h"
#include "defrag.h"
extern int arr[];
extern int free_obj;
extern int list_head[] ;
extern int count ;


void callMenu();

#endif
