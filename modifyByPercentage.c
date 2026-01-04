#include "header.h"
void modifyByPercentage(SLL **ptr){
    float percent;
    int rnum;
    SLL *temp = *ptr;
    int found = 0;

    printf("Enter Percentage to Search: ");
    scanf("%f", &percent);

    while(temp){
        if(temp->marks == percent){
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

