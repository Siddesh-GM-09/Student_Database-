/*Tasks for stud_mod.c:
1) Print sub-menu for modify by rollno/name/percentage. ->Done
2) If rollno: search and update.
3) If name/percentage: show matches, ask rollno to modify.
4) Menu: R/r rollno, N/n name, P/p percentage.
*/
#include "header.h"

//To Modify The Record Based On The User Input
void modifyRecord(SLL ** ptr){
	if(*ptr==NULL){
                printf("\033[31;4;5mRecords Not Found...!\033[0m\n\n");
                return;
        }
	printf("\033[33mR.Modify By Roll Number.\033[0m\n");
        printf("\033[33mN.Modify By Name.\033[0m\n");
        printf("\033[33mP.Modify By Percentage.\033[0m\n\n");
        printf("\033[33mEnter Your Choice :\033[0m ");
	char op;
	scanf(" %c",&op);
	op=tolower(op);
	switch(op){
		case 'r' :modifyByRollno(ptr);
		break;
		case 'n' :modifyByName(ptr);
		break;
		case 'p' :modifyByPercentage(ptr);
		break;
	}
}
