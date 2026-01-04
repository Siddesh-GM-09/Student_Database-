// reverse the list
#include "header.h"
void  reverseRecord(SLL **ptr){
	if(*ptr==NULL){
		printf("\033[31;4;5mRecords Not Found...!\033[0m\n\n");
		return;
	}
	int count=countRecord(*ptr),i=0;
	SLL **tempArr;//To Store the links 
	tempArr=malloc(sizeof(SLL *)*count); 
	if(count>1){
		SLL *temp=*ptr; //To run through all data
		while(temp){
			tempArr[i++]=temp;
			temp=temp->next;
		}
		for(i=count-1;i>0;i--){
			tempArr[i]->next=tempArr[i-1];//Reversing Links
		}
		tempArr[0]->next=NULL;
		*ptr=tempArr[count-1];
	}
}
//Count the number of students Present
int countRecord(SLL *ptr){
	int count=0;
	while(ptr){
		count++;
		ptr=ptr->next;
	}
	return count;
}
