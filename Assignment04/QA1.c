/*1. Write a function to calculate factorial of a given number.*/
#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &n);
	int fact = factorial(n);
	printf("Factorial of %d is %d\n", n, fact);
	return 0;
}
int factorial(int n){
	int o = 1;
	for(int i=2; i<=n; i++){
		o *= i;
	}
	return o;
}
