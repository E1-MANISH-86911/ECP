#include<stdio.h>

enum gender{
MALE,FEMALE
};

typedef struct person{
int pid;
char name[20];
char address[20];
int age;
enum gender g;
}p_t;

int main(){
	 p_t p1={1234,"xyz","hyd",30,1};
	 p_t p2;
	FILE *fp;
	fp=fopen("person.txt","wb+");

	fwrite(&p1,sizeof(p_t),1,fp);

	rewind(fp);

	fread(&p2,sizeof(p_t),1,fp);

	printf("%d %s %s %d %s\n",p2.pid,p2.name,p2.address,p2.age,p2.g ? "MALE" : "FEMALE");



	fclose(fp);
	return 0;
}
