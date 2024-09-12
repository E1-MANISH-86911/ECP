/*3. Write a program to accept number and check whether the number is +ve, -ve and zero.*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n>0){
		printf("The given number is positive.\n");
	}
	else if(n==0){
		printf("The given number is zero.\n");
	}
	else if(n<0){
		printf("The given number is negative.\n");
	}
	return 0;
}
