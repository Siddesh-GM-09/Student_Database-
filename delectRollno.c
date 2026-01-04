//To Delect By Roll Number
#include "header.h"
void delectByRollnu(SLL **ptr){
        if(*ptr==NULL){
                printf("\033[31;4;5mRecords Not Found...!\033[0m\n\n");
                return;
        }
        int rnum;//rnum -> Roll Number
        printf("Enter the Roll Number You Want to Delect : ");
        scanf(" %d",&rnum);
        SLL *del,*prev;
        char flag=0;
        del = *ptr; //Important
        while(del){
                if(rnum==del->rollNo){
                        if(del==*ptr){
                                *ptr=del->next;
                        }
                        else{
                                prev->next=del->next;
                        }
                        flag=1;
                        free(del);
                        printf("\033[32mRecord Delected Successfully...!\033[0m\n\n");
                        return;
                }
                prev=del;
                del=del->next;
        }
        if(!flag){
                printf("\033[31mRoll Number Not Found\033[0m\n\n");
        }
}
