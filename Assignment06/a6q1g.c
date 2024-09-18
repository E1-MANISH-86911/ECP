/***strchr()***/

#include<stdio.h>
#include<string.h>

int main(){
char s[20]="hello sunbeam";
char *ptr;
ptr=strchr(s,'u');
printf("%u",ptr);
return 0;
}
