/*** Write a function to accept array of student’s information from the user. Write another function
to print the array student’s information. Re-use these functions in rest of the assignments
wherever required.***/

#include<stdio.h>
typedef struct student{
int rollno;
char name[20];
float marks;
}s_t;

s_t s[sizeof(s_t)];
void accept();
void print();

int main(){

accept();
print();
return 0;
}

void accept(){
	for(int i=0;i<2;i++){
	scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
	}
}
void print(){
	for(int i=0;i<2;i++){
	printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
}
