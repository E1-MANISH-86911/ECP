/***if number is even then it is said to be divisible by 2, otherwise if it is odd then not divisible by 2***/


#include<stdio.h>

int main(){
int num;
scanf("%d",&num);
if(num&1)
printf("odd and not divisible by 2");
else
printf("even and divisible by 2");
return 0;
}
