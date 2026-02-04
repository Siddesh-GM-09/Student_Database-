# 🎓 Student Database Management System (C)

![Language](https://img.shields.io/badge/Language-C-blue)
![Data%20Structure](https://img.shields.io/badge/Data%20Structure-Singly%20Linked%20List-orange)
![File%20Handling](https://img.shields.io/badge/File%20Handling-CSV-green)
![Project](https://img.shields.io/badge/Project-Completed-success)

---

## 📌 Project Overview
A **console-based Student Database Management System** implemented in **C**, using a **singly linked list** as the core data structure.  
The project emphasizes **data structures**, **dynamic memory management**, and **file handling**, simulating basic database-style operations.

---

## ✨ Key Features
- Add (Create) student records  
- Display (Read) all records  
- Modify (Update) records by:
  - Roll number
  - Name
  - Percentage  
- Delete records by:
  - Roll number
  - Name  
- Sort student records  
- Reverse the linked list  
- Save records to a **CSV file** using file I/O  

---

## 🧠 Data Structure Used
### 🔹 Singly Linked List
- Dynamic memory allocation using `malloc`, `calloc`, and `free`
- Node-based traversal for:
  - Insert
  - Delete
  - Modify
  - Search operations
- Efficient handling of dynamic record sizes

---

## 🗂️ File Structure
```
STUDENT_DATABASE_SYSTEM/
├── main.c                  # Program entry point & menu handling
├── header.h                # Structure definitions & prototypes
├── stud_add.c              # Add student record
├── stud_show.c             # Display student records
├── stud_del.c              # Delete record (common logic)
├── delectRollno.c          # Delete by roll number
├── delectName.c            # Delete by name
├── stud_mod.c              # Modify record (common logic)
├── modifyByRollno.c        # Modify by roll number
├── modifyByName.c          # Modify by name
├── modifyByPercentage.c    # Modify by percentage
├── sortRecord.c            # Sorting logic
├── reverseRecord.c         # Linked list reversal
├── stud_save.c             # Save records to CSV
├── student.csv             # Persistent storage
├── README.md
```

---

## 🛠️ Build Instructions

### ▶️ Using Makefile
```bash
make
```

### ▶️ Manual Compilation
```bash
gcc -std=c99 -Wall -Wextra -pedantic -o student main.c *.c
```

---

## ▶️ Run the Program
```bash
./student
```

---

## 📄 CSV File Format
```csv
rollno,name,percentage
1,John,78.5
2,Alice,92.0
```

---

## 🎯 Learning Outcomes
- Strong understanding of **linked lists**
- Hands-on experience with **pointers & dynamic memory**
- Practical use of **file handling (CSV persistence)**
- Modular programming and clean code organization
- Debugging and menu-driven application design

---

## 👤 Author
**Siddesh G M**  
Embedded & C Programmer  
Data Structures | Linked Lists | File Handling
