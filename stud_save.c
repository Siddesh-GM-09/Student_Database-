//Module: stud_save.c
//Task:
//1. Save all records to student.dat.
#include "header.h"
void saveRecord(SLL *ptr){
	if(ptr==NULL){
		printf("Record Not Found\n");
		return;
	}
	FILE *fp;
	fp=fopen("student.csv","w");
	while(ptr){
		fprintf(fp,"%d,%s,%f\n",ptr->rollNo,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	printf("Data Saved...!\n");
	fclose(fp);
}
void readRecord(SLL **ptr){
	SLL *new,*last=NULL;
	FILE *fp=fopen("student.csv","r");
	if(!fp){
		printf("Record Not Found\n");
		return;
	}
	while(1){
		new=malloc(sizeof(SLL));
		if(fscanf(fp,"%d,%[^,],%f\n",&new->rollNo,new->name,&new->marks)==-1){
			break;
		}
		new->next=NULL;
		if(*ptr==NULL){
			*ptr=new;
		}
		else{
			last=*ptr;
			while(last->next){
				last=last->next;
			}
			last->next=new;
		}
	}
}
