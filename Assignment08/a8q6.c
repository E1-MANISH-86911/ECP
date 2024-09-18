/**6. Write a structure to store school student information. The student result is one of the members
of this information. Note that till 4th standard school follows grade scheme (A / B / C) and after
4th standard it follows percentage pattern. Accept the information of 3 students from the user
and display it again.****/
#include<string.h>
#include<stdio.h>
typedef struct student{
int std;
int rollno;
char name[20];
char grade;
float percent;
}s_t;

void accept();
void print();

s_t s[3];
int main(){

accept();
print();

return 0;
}
void accept(){
	for(int i=0;i<3;i++){
	printf("enter std: \n");
	scanf("%d",&s[i].std);
	
	if(s[i].std<=4){
	printf("enter rollno,name,grade");
	scanf("%d %s %c",&s[i].rollno,s[i].name,&s[i].grade);
	}
	else{
	printf("enter rollno,name,percentage");
	scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].percent);
}}}


void print(){
	
	for(int i=0;i<3;i++){
	printf("std=%d,rollno= %d,name= %s\n",s[i].std,s[i].rollno,s[i].name);
	if(s[i].std<=4)
	printf("grade=%c\n",s[i].grade);
	else
	printf("grade=%f\n",s[i].percent);
	}
	}

