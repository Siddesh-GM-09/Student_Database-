//Main Function
#include "header.h"

void main(){
        char op;
        SLL *headptr=NULL; //Starting Address of data
        while(1){ //To take input Repeatedly
                //Menu Of Record
                printf("\033[32;4;5m***** STUDENT RECORD MENU *****\033[0m\n");
                printf("\033[33mA.Add new record\033[0m\n"); //Done
                printf("\033[33mD.Delete a record\033[0m\n"); //Done
                printf("\033[33mS.Show the list\033[0m\n"); //Done
                printf("\033[33mM.Modify a record\033[0m\n");
                printf("\033[33mV.Save\033[0m\n");
                printf("\033[33mE.Exit\033[0m\n"); //Done
                printf("\033[33mT.Sort the list\033[0m\n"); //Done
                printf("\033[33mL.Delete all the records\033[0m\n"); //Done
                printf("\033[33mR.Reverse the list\033[0m\n"); //Done
                printf("\033[33mC.Total Number of Students\033[0m\n"); //Done
                printf("\033[33mO.Read The Input From File \033[0m\n\n"); //Done
                printf("Select Your Option : ");
                scanf(" %c",&op);//scaning option
                op=tolower(op);
                int count;
                char flag=0;
                switch(op){
                        case 'a':createRecord(&headptr);  //creating the new record
                                 break;
                        case 'd':delectRecord(&headptr); //Delect the record
                                 break;
                        case 's':showRecord(headptr); //To Display the Record
                                 break;
                        case 'e': op;
                                  printf("\033[33mV.Save And Exit\033[0m\n");
                                  printf("\033[33mE.Exit without Saveing\033[0m\n");
                                  printf("Select Your Option : ");
                                  scanf(" %c",&op);
                                  op=tolower(op);
                                  switch(op){
                                          case 'v':flag =1;
                                                   goto L1;
                                          case 'e':goto L2;
                                  }
                                L2:
                                  exit(0); //to exit from the options
                                  break;
                        case 't':sortRecord(&headptr);//To Sort List Based on The Requirements
                                 break;
                        case 'l':delectAll(&headptr);//To Delect All the record
                                 break;
                        case 'r':reverseRecord(&headptr);//To Reverse The Record
                                 break;
                        case 'c':count=countRecord(headptr);//To Check The Number of Students
                                 printf("Total Number of Students are %d\n",count);
                                 break;
                        case 'm':modifyRecord(&headptr);//To Modify The Record
                                 break;
                        case 'v':
                                L1:
                                 saveRecord(headptr);
                                 if(flag==1){
                                         goto L2;
                                 }
                                 break;
                        case 'o':if(headptr==NULL){
                                         readRecord(&headptr);//To Read The Document
                                         break;
                                 }
                                 else{
                                         printf("\033[1;33m\nWarning: Records already loaded. Clear the list before reading from file.\n\033[0m");
                                         break;
                                 }
                        default :printf("\033[31mEnter The valid Option...\033[0m\n\n");
                }
        }
}
