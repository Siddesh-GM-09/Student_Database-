// stud_add.c
// Task:
// 1. Called when user enters 'a'. ->Done
// 2. Dynamically create new block for student (rollno, name, percentage). ->Done
// 3. Auto-assign the least positive rollno (no duplication).->Done
// 4. Accept name & percentage from user. ->Done
// 5. Insert node into singly linked list. ->Done
#include "header.h"
int createRollno(SLL *);
void createRecord(SLL **ptr){
    SLL *new,*last;
    new=malloc(sizeof(SLL));
    printf("Enter the Details In This Order\n");
    printf("Name  | Marks \n");
    new->rollNo = createRollno(*ptr);
    scanf(" %s",new->name);
    scanf(" %f",&new->marks);
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
int createRollno(SLL *ptr){
    int roll = 1;
    SLL *temp;

    while (1) {
        temp = ptr;
        int found = 0;

        while (temp) {
            if (temp->rollNo == roll) {
                found = 1;
                break;
            }
            temp = temp->next;
        }

        if (!found) {
            return roll;   // smallest missing rollNo
        }

        roll++;
    }
}
