/***Write a function to write student’s record to a text file using formatted I/O. i.e. fprintf. Write
another function to read student’s record from a text file using formatted I/O. i.e. fscanf.
**/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

void writeStudentRecords(const char *filename, Student *students, int numStudents) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%d %s %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    fclose(file);
}

void readStudentRecords(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    Student student;
    while (fscanf(file, "%d %s %f", &student.rollNumber, student.name, &student.marks) == 3) {
        printf("Roll Number: %d\n", student.rollNumber);
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.marks);
    }

    fclose(file);
}

int main() {
    const char *filename = "students.txt";
    int numStudents = 3;

    Student students[] = {
        {1, "John Doe", 85.50},
        {2, "Jane Smith", 90.25},
        {3, "Bob Johnson", 78.75}
    };

    writeStudentRecords(filename, students, numStudents);
    readStudentRecords(filename);

    return 0;
}
