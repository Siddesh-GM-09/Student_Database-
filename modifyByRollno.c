#include "header.h"
void modifyByRollno(SLL **ptr){
    int rnum, choice;
    SLL *temp = *ptr;

    printf("Enter Roll Number: ");
    scanf("%d", &rnum);

    while(temp){
        if(temp->rollNo == rnum){
            printf("\033[32mRecord Found!\033[0m\n");
            printf("| %-10d | %-20s | %-8.2f |\n",
                   temp->rollNo, temp->name, temp->marks);

            printf("\nWhat do you want to modify?\n");
            printf("1. Roll Number\n");
            printf("2. Name\n");
            printf("3. Percentage\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                    printf("Enter New Roll Number: ");
                    scanf("%d", &temp->rollNo);
                    break;
                case 2:
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", temp->name);
                    break;
                case 3:
                    printf("Enter New Percentage: ");
                    scanf("%f", &temp->marks);
                    break;
                default:
                    printf("Invalid Choice\n");
                    return;
            }

            printf("\033[32mUpdated Successfully!\033[0m\n");
            return;
        }
        temp = temp->next;
    }

    /* ---------- If Record Not Found ---------- */
    printf("\033[33mRecord Not Found!\033[0m\n");
    printf("\033[32mCreating New Record...\033[0m\n");

    createRecord(ptr);

    printf("\033[32mNew Record Added Successfully!\033[0m\n");
}

