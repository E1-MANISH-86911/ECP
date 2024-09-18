/***divisible by 4 or not***/

#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	if(num&3)
	printf("not divisble by 4");
	else
	printf("divisible by 4");
	return 0;
}
