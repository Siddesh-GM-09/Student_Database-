//To Delect By Name
#include "header.h"
void delectByName(SLL **ptr){
        if(*ptr==NULL){
                printf("\033[31;4;5mRecords Not Found...!\033[0m\n\n");
                return;
        }
        char Name[50];//Name -> Want to delect
        printf("Enter the Name You Want to Delect : ");
        scanf(" %[^\n]",Name);
        SLL *del,*prev;
        del=*ptr; //Important
        char count=0,flag=0;
        while(del){  //To check the multiple Names
                if(strcmp(del->name,Name)==0){
                        count++;
                }
                del=del->next;
        }
        if(count==1){
                del=*ptr;//Reassign to check form begin
                while(del){
                        if(strcmp(del->name,Name)==0){
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
        }
        else{
                SLL *temp=*ptr;
                while(temp){
                        if(strcmp(temp->name,Name)==0){ //To Print All the Multiple Names
                                printf("%d %s %f\n",temp->rollNo,temp->name,temp->marks);
                        }
                        temp=temp->next;
                }
                delectByRollnu(ptr); //To Delect the multiple name based on Roll Number
                return;
        }
        if(!flag){
                printf("\033[31mRoll Number Not Found\033[0m\n\n");
        }
}
