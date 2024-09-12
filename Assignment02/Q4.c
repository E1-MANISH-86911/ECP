/*4. Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.*/
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("a. If else.\n");
	if(a>b){
		printf("%d is greater than %d.\n", a, b);
	}
	else if(a<b){
		printf("%d is greater than %d.\n", b, a);
	}
	else if(a==b){
		printf("%d is equals to %d.\n", a, b);
	}
	printf("b. Conditional operator.\n");
	int max = (a==b) ? -1 : (a>b) ? a : b;
	if(max==-1){
		printf("%d is equals to %d.\n", a, b);
	}
	else{
		printf("The maximum number between %d and %d is %d.\n", a, b, max);
	}
	return 0;
}
