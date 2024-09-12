/*1. Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/

#include<stdio.h>
int main(){
	float  a, b, div=0;
	printf("Enter two values: ");
	scanf("%f %f", &a, &b);
	if(b==0){
		printf("Can't divide by zero. The result will print infinity.\n");
	}
	else{
		div = a / b;
		printf("Division = %0.2f\n", div);
	}
	return 0;
}
