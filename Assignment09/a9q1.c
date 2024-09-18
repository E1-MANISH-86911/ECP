/****1. Write a program to read a file character by character and display its content on screen.****/

#include<stdio.h>

int main(){
	FILE *fp;
	fp=fopen("file1.txt","w");
    fprintf(fp,"Hello World");
	fclose(fp);

	fp=fopen("file1.txt","r");
	char ch;
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
		}
	return 0;
}
