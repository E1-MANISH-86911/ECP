/***Write a function to sort array of student’s information by roll number. Write another function to
sort student’s information by name..***/
#include<string.h>
#include<stdio.h>
typedef struct student{
int rollno;
char name[20];
float marks;
}s_t;

s_t s[3];
//void accept();

void print();
void fun1();
void fun2();
int main(){
s[0]=(s_t){1,"manish",133};
s[1]=(s_t){3,"ramana",123};
s[2]=(s_t){2,"kelvin",543};
//accept();
print();
fun1();
fun2();

return 0;
}
/**void accept(){
	for(int i=0;i<2;i++){
	scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
	}
}**/

void fun1(){
		for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
		if(s[i].rollno>s[j].rollno){
			s_t temp=s[i];
			s[i]=s[j];
			s[j]=temp;

		}
		}
	}
	for(int i=0;i<3;i++){
		printf("fun1: %d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
}
void fun2(){
	for(int i=0;i<3;i++){
	for(int j=i+1;j<3;j++){
		if(strcmp(s[i].name,s[j].name)>0){
			s_t temp=s[i];
			s[i]=s[j];
			s[j]=temp;}
			}
			printf("fun2: %d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
		}
	
}
void print(){
	for(int i=0;i<3;i++){
	printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
}
