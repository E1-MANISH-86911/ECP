#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
    int num;
	float pi;
	char str[10];
	FILE *fp=fopen("file3.txt","r");
	fscanf(fp,"%c%d%f%s",&ch,&num,&pi,str);
	printf("%c\n%d\n%f\n%s\n",ch,num,pi,str);
	
	
	fclose(fp);
	return 0;
}
