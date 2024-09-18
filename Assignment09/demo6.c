#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch='A';
    int num=5;
	float pi=3.14;
	char *ptr="manish";
	FILE *fp=fopen("file3.txt","w");
	fprintf(fp, "%c\n%d\n%f\n%s\n",ch,num,pi,ptr);
	
	
	fclose(fp);
	return 0;
}
