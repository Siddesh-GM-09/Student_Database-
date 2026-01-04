#include "header.h"
void modifyByName(SLL **ptr){
    char name[20];
    int rnum;
    SLL *temp = *ptr;
    int found = 0;

    printf("Enter Name to Search: ");
    scanf(" %[^\n]", name);

    while(temp){
        if(strcmp(temp->name, name) == 0){
            printf("| %-10d | %-20s | %-8.2f |\n",
                   temp->rollNo, temp->name, temp->marks);
            found = 1;
        }
        temp = temp->next;
    }

    if(!found){
        printf("\033[31mNo Records Found!\033[0m\n");
        return;
    }

    printf("Enter Roll Number to Modify: ");
    scanf("%d", &rnum);

    modifyByRollno(ptr);   // reuse logic
}

