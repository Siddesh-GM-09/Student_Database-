//Module stud_show.c
//Task:1. Display complete student list in tabular form. ->Done

#include "header.h"

void showRecord(SLL *ptr){
	if(ptr==NULL){
		printf("\033[31mRecord Not Found...!\033[0m\n");
		return;
	}
	printf("+------------+----------------------+------------+\n");
    	printf("| %-10s | %-20s | %-8s |\n", "RollNo", "Name", "Percentage");
    	printf("+------------+----------------------+------------+\n");
	while(ptr){
		printf("| %-10d | %-20s | %-8.2f   |\n",ptr->rollNo,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	printf("+------------+----------------------+------------+\n");
}
