/**6. Write a menu driven program to make a student database. Make program readable by using
enumerations.
Write functions using binary file and unformatted I/O
a. Write student’s record to file.
b. Read student’s record from file.
c. Search of student’s record in a file by roll number.
d. Search student’s record by name.
e. Modify of student’s record in a file.
f. Remove of student’s record in a file.**/


#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef enum {
    WRITE_RECORD,
    READ_RECORD,
    SEARCH_BY_ROLL,
    SEARCH_BY_NAME,
    MODIFY_RECORD,
    REMOVE_RECORD,
    EXIT
} MenuOption;

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

void writeRecord() {
    FILE *file = fopen("student.db", "ab");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter name: ");
    scanf(" %[^\n]", student.name);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(Student), 1, file);
    fclose(file);
}

void readRecord() {
    FILE *file = fopen("student.db", "rb");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    Student student;
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Roll Number: %d\n", student.rollNumber);
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.marks);
    }

    fclose(file);
}

void searchByRoll() {
    FILE *file = fopen("student.db", "rb");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    Student student;
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.rollNumber == roll) {
            printf("Record found:\n");
            printf("Roll Number: %d\n", student.rollNumber);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n\n", student.marks);
            return;
        }
    }

    printf("Record not found.\n");
    fclose(file);
}

void searchByName() {
    FILE *file = fopen("student.db", "rb");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char name[50];
    printf("Enter name to search: ");
    scanf(" %[^\n]", name);

    Student student;
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (strcmp(student.name, name) == 0) {
            printf("Record found:\n");
            printf("Roll Number: %d\n", student.rollNumber);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n\n", student.marks);
            return;
        }
    }

    printf("Record not found.\n");
    fclose(file);
}

void modifyRecord() {
    FILE *file = fopen("student.db", "rb+");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    int roll;
    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    Student student;
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.rollNumber == roll) {
            printf("Record found:\n");
            printf("Enter new name: ");
            scanf(" %[^\n]", student.name);
            printf("Enter new marks: ");
            scanf("%f", &student.marks);

            fseek(file, -sizeof(Student), SEEK_CUR);
            fwrite(&student, sizeof(Student), 1, file);
            return;
        }
    }

    printf("Record not found.\n");
    fclose(file);
}

void removeRecord() {
    FILE *file = fopen("student.db", "rb");
    FILE *temp = fopen("temp.db", "wb");
    if (file == NULL || temp == NULL) {
        perror("Error opening file");
        exit(1);
    }

    int roll;
    printf("Enter roll number to remove: ");
    scanf("%d", &roll);

    Student student;
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.rollNumber != roll) {
            fwrite(&student, sizeof(Student), 1, temp);
        }
    }

    fclose(file);
    fclose(temp);
    remove("student.db");
    rename("temp.db", "student.db");
}

int main() {
    while (1) {
        printf("Student Database Menu:\n");
        printf("1. Write Record\n");
        printf("2. Read Record\n");
        printf("3. Search By Roll Number\n");
        printf("4. Search By Name\n");
        printf("5. Modify Record\n");
        printf("6. Remove Record\n");
        printf("7. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case WRITE_RECORD:
                writeRecord();
                break;
            case READ_RECORD:
                readRecord();
                break;
            case SEARCH_BY_ROLL:
                searchByRoll();
                break;
            case SEARCH_BY_NAME:
                searchByName();
                break;
            case MODIFY_RECORD:
                modifyRecord();
                break;
            case REMOVE_RECORD:
                removeRecord();
                break;
            case EXIT:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
