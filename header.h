//Header : Contains All Function Definations 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<ctype.h>

#define SWAP_VAL(a,b,type) {type t=a;(a)=(b);(b)=(t);} //For Swapping The Numbers
#define SWAP_STR(a,b,type) {type t = (malloc(sizeof(char)*50)); strcpy(t,a);strcpy(a,b);strcpy(b,t);} //For Swapping of Names

//Student Data type
typedef struct student{
    int rollNo;
    char name[50];
    float marks;
    struct student *next;
}SLL;

void createRecord(SLL **);  //Create Record
void showRecord(SLL *);    //To Display the Record
void delectRecord(SLL **); //To Delect the Record
void delectByRollnu(SLL **);//TO Delect By Roll Number
void delectByName(SLL **);//To Delect By Name
void delectAll(SLL **);//To Delect All the record
void reverseRecord(SLL **);//To Reverse The Record
int countRecord(SLL *);//To Count the  Total Number of students
void sortRecord(SLL **);//To Sort The Record The List Based On The Input
void sortByName(SLL **);//To Sort Record By Name
void sortByPercentage(SLL **);//To Sort Record By Percentage
void modifyRecord(SLL **);//To Modify The Record Based On User Input
void modifyByRollno(SLL **);//To Modify The Record Based On Roll Number 
void modifyByName(SLL **);//To Modify The Record Based On The Name
void modifyByPercentage(SLL **);//To Modify The Record Based On Percentage
void sortByRollno(SLL **);//To Sort The record Based On Roll Number
void saveRecord(SLL *);//To Save In The File
void readRecord(SLL **ptr);//To Read The Record From File
