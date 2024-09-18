/***strncmp()***/

#include<stdio.h>
#include<string.h>

int main(){
char s1[10]="hey";
char s2[10]="hii";
int res=strncmp(s1,s2,2);
printf("res=%d",res);
if(res==0){
printf("equal");}
else if(res>0){
printf("greater");}
else{
printf("lesser");}
return 0;
}

