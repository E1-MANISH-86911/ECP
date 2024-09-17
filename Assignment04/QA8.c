/*8. Write a function to return next term of Fibonacci series with each call to the function.*/
#include<stdio.h>
void fibonacci(int n, int fact, int fact1, int temp);
int main(){
	int n;
	printf("Enter a number to print fibonacci of given size: ");
	scanf("%d", &n);
	fibonacci(n, 0, 1, 0);
	return 0;
}
void fibonacci(int n, int fact, int fact1, int temp){
	if(n==0){
		printf("\n");
		return;
	}
	printf("%d ", fact);
	temp = fact + fact1;
	fact = fact1;
	fact1 = temp;
	n--;
	fibonacci(n, fact, fact1, temp);
}
