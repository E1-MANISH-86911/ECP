/***strtok()***/
#include<stdio.h>
#include<string.h>

int main(){
char s[64]="desd dmc dac";
printf("token=%s\n",strtok(s," "));
printf("token=%s\n",strtok(NULL," "));
return 0;
}
