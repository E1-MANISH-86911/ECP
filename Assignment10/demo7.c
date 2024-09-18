/***binary equivalent of a given number using recursion***/

#include<stdio.h>

void bin(int num);

int main(){
int num;
scanf("%d",&num);
bin(num);
return 0;
}

void bin(int num){
	if(num==0)
	return; 
	bin(num/2);
	printf("%d",num%2);
}
