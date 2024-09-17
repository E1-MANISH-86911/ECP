/*7. Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables*/

#include<stdio.h>
int sum, prod;
void calculate(int a, int b);
void calculate1(int a, int b, int *sum1, int *prod1);
int main(){
	int a, b;
	printf("a. Using global variables.\n");
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	calculate(a, b);
	printf("Sum = %d\n", sum);
	printf("Product = %d\n", prod);
	int sum1, prod1;
	printf("b. Without using global variables.\n");
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	calculate1(a, b, &sum1, &prod1);
	printf("Sum = %d\n", sum1);
	printf("Product = %d\n", prod1);
	return 0;
}
void calculate(int a, int b){
	sum = a+b;
	prod = a*b;
}
void calculate1(int a, int b, int *sum1, int *prod1){
	*sum1 = a + b;
	*prod1 = a * b;
}
