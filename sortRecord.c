//Task:
//1. Menu to modify based on rollno, name, or percentage.
//2. If multiple names/percentages match, ask rollno.

#include "header.h"

void sortRecord(SLL **ptr){
	if(*ptr==NULL){
		printf("\033[31;4;5mRecords Not Found...!\033[0m\n\n");
		return;
	}
	printf("\033[33mR.Sort By Roll Number.\033[0m\n");
	printf("\033[33mN.Sort By Name.\033[0m\n");
	printf("\033[33mM.Sort By Percentage.\033[0m\n\n");
	printf("\033[33mEnter Your Choice :\033[0m ");	
	char op;
	scanf(" %c",&op);
	op=tolower(op);
	switch(op){
		case 'r' :sortByRollno(ptr);
			break;
		case 'n' :sortByName(ptr);
			break;
		case 'm' :sortByPercentage(ptr) ;
			break;
		default:printf("\033[31;4;5mEnter the valid Option....!\033[0m\n\n");
	}
}
//To Sort By Name
void sortByName(SLL **ptr){
	int count=countRecord(*ptr);
	SLL *ptr1,*ptr2;
	ptr1=*ptr;//Important 
	for(int i=0;i<count-1;i++){  //Using Selection Sort 
		ptr2=ptr1->next;
		for(int j=0;j<count-i-1;j++){
			if(strcmp(ptr1->name,ptr2->name)>0){ // Checking The Names
				SWAP_VAL(ptr1->rollNo,ptr2->rollNo,int);
				SWAP_STR(ptr1->name,ptr2->name,char *);
				SWAP_VAL(ptr1->marks,ptr2->marks,float);
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	printf("\033[1;5;36mDone...!\033[0m\n");
}

//To Sort By Percentage
void sortByPercentage(SLL **ptr){
	int count=countRecord(*ptr);
	SLL *ptr1,*ptr2;
	ptr1=*ptr;
	for(int i=0;i<count-1;i++){
		ptr2=ptr1->next;
		for(int j=0;j<count-i-1;j++){
			if((ptr1->marks)>(ptr2->marks)){
				SWAP_VAL(ptr1->rollNo,ptr2->rollNo,int);
				SWAP_STR(ptr1->name,ptr2->name,char *);
				SWAP_VAL(ptr1->marks,ptr2->marks,float);
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	printf("\033[1;5;36mDone...!\033[0m\n");
}
//To Sort The Record Based On Roll Number
void sortByRollno(SLL **ptr){
	int count=countRecord(*ptr);
	SLL *ptr1,*ptr2;
	ptr1=*ptr;
	for(int i=0;i<count-1;i++){
		ptr2=ptr1->next;
		for(int j=0;j<count-i-1;j++){
			if((ptr1->rollNo)>(ptr2->rollNo)){
				SWAP_VAL(ptr1->rollNo,ptr2->rollNo,int);
				SWAP_STR(ptr1->name,ptr2->name,char *);
				SWAP_VAL(ptr1->marks,ptr2->marks,float);
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	printf("\033[1;5;36mDone...!\033[0m\n");
}
