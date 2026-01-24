# Student Database Management System (C)

A console-based Student Database Management System implemented in C using a singly linked list.  
The project focuses on data structures, dynamic memory management, and file handling concepts.

## Project Description
This application manages student records using a linked list as the core data structure.  
Each record typically contains roll number, name, and percentage.  
The program supports common database-style operations and persists data using a CSV file.

## Key Features
- Create (add) student records
- Read (display) all records
- Update (modify) records by roll number, name, or percentage
- Delete records by roll number or name
- Sort student records
- Reverse the linked list
- Save records to `student.csv` using file I/O

## Data Structure Used
- **Singly Linked List**
  - Dynamic memory allocation using `malloc`, `calloc`, and `free`
  - Node-based traversal for insert, delete, modify, and search operations

## File Structure
- `main.c` – Program entry point and menu handling
- `header.h` – Structure definitions and function prototypes
- `stud_add.c` – Add student record
- `stud_show.c` – Display student records
- `stud_del.c`, `delectRollno.c`, `delectName.c` – Delete operations
- `stud_mod.c`, `modifyByRollno.c`, `modifyByName.c`, `modifyByPercentage.c` – Modify operations
- `sortRecord.c` – Sorting logic
- `reverseRecord.c` – Linked list reversal
- `stud_save.c` – Save records to CSV
- `student.csv` – Persistent storage file

## Build Instructions

### Using Makefile
```bash
make
```

### Manual Compilation
```bash
gcc -std=c99 -Wall -Wextra -pedantic -o student main.c *.c
```

## Run
```bash
./student
```

## CSV Format
```csv
rollno,name,percentage
1,John,78.5
2,Alice,92.0
```

## Learning Outcomes
- Strong understanding of linked lists
- Hands-on experience with pointers and dynamic memory
- Practical use of file handling in C
- Modular programming and code organization

## Author
Siddesh G M
