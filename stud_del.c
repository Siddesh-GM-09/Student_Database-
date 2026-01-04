//Module: stud_del.c
//Task:
//1. Allow delete by rollno or by name. ->Done
//2. If multiple names exist, display all matching. ->Done
//3. Delete selected node from list. ->Done 

#include "header.h"

//Delect Specfic Record
void delectRecord(SLL **ptr){
	if(*ptr==NULL){
		printf("\033[31;4;5mRecords Not Found...!\033[0m\n\n");
		return;
	}
	char op;
	printf("\033[33mR.Delect By Roll Number.\033[0m\n");
	printf("\033[33mN.Delect By Name.\033[0m\n\n");
	printf("\033[33mEnter Your Choice :\033[0m ");
	scanf(" %c",&op);
	op=tolower(op);
	switch(op){
		case 'r' :delectByRollnu(ptr);
			break;
		case 'n' :delectByName(ptr);
			break;
		default:printf("\033[31;4;5mEnter the valid Option....!\033[0m\n\n");
	}
}

//Delect All Record 
void delectAll(SLL **ptr){
	if(*ptr==NULL){
		printf("\033[31;4;5mRecords Not Found...!\033[0m\n\n");
		return;
	}
	SLL *del=*ptr;
	while(del){
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf("\033[33mAll Nodes Delected..!\033[0m\n\n");
}
