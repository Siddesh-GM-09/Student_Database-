#To compile multiple file at a time
target = main.o stud_add.o stud_show.o stud_del.o delectName.o delectRollno.o reverseRecord.o sortRecord.o modifyByRollno.o modifyByName.o modifyByPercentage.o  stud_mod.o stud_save.o
CC = gcc
student: ${target}
	${CC} ${target} -o student
main.o: main.c
	${CC} -c main.c

stud_add.o: stud_add.c
	${CC} -c stud_add.c

stud_show.o: stud_show.c
	${CC} -c stud_show.c

stud_del.o: stud_del.c
	${CC} -c stud_del.c
	
delectName.o: delectName.c
	${CC} -c delectName.c

delectRollno.o:  delectRollno.c
	${CC} -c  delectRollno.c

reverseRecord.o: reverseRecord.c
	${CC} -c reverseRecord.c

sortRecord.o: sortRecord.c
	${CC} -c sortRecord.c

modifyByRollno.o: modifyByRollno.c
	${CC} -c modifyByRollno.c

modifyByName.o: modifyByName.c
	${CC} -c modifyByName.c

modifyByPercentage : modifyByPercentage.c
	${CC} -c modifyByPercentage.c
stud_mod.o : stud_mod.c
	${CC} -c stud_mod.c
stud_save.o: stud_save.c
	${CC} -c stud_save.c
clear:
	@echo "Cleaning Object Files"
	@rm -vr *.o student
