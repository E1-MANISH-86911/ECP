/*** Write a function to search student’s information by roll number. Write another function to
search student’s information by name..***/
#include<string.h>
#include<stdio.h>
typedef struct student{
int rollno;
char name[20];
float marks;
}s_t;

s_t s[sizeof(s_t)];
void accept();

void print();
void fun1();
void fun2();
int main(){

accept();
print();
fun1();
fun2();

return 0;
}
void accept(){
	for(int i=0;i<2;i++){
	scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
	}
}

void fun1(){
	for(int i=0;i<2;i++){
		if(s[i].rollno==2){
			printf("fun1: %d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
		}
	}
}
void fun2(){
	for(int i=0;i<2;i++){
		if(strcmp(s[i].name,"manish")==0){
			printf("fun2: %d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
		}
	}
}
void print(){
	for(int i=0;i<2;i++){
	printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
}
