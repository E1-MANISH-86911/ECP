/***1. Write a program to demonstrate use of string library functions.
a. strlen()
e. stricmp()
i. strncpy()
b. strcpy()
f. strrev()
j. strncat()
c. strcat()
g. strchr()
k. strncmp()
d. strcmp()
h. strstr()
l. strtok()*****/

#include<stdio.h>
#include<string.h>

int main(){
	char str[10]="pg desd";
	size_t len=strlen(str);
	printf("%d",len);
	return 0;
}
