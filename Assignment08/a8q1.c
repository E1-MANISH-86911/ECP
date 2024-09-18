/**1. Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same.***/

#include<stdio.h>

typedef struct student{
	int rollno;
	char name[20];
	float marks;
}s_t;

int main(){
	s_t s;
	scanf("%d %s %f",&s.rollno,s.name,&s.marks);
	printf("%d %s %f",s.rollno,s.name,s.marks);
	return 0;
}
