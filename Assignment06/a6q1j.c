/***strncat***/
#include<stdio.h>
#include<string.h>

int main(){
char s1[10]="hello";
char s2[10]="hii";
printf("%s",strncat(s1,s2,3));
return 0;
}
