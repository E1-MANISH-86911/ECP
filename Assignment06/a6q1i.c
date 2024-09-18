/***strncpy()***/

#include<stdio.h>
#include<string.h>

int main(){
char s[20]="hello";
char c[20]="hii";
printf("%s",strncpy(s,c,3));
}

