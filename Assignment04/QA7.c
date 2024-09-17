/*7. Write a function to print given number of terms of Fibonacci series.*/
#include<stdio.h>
void fibonacci(int n);
int main(){
	int n;
	printf("Enter a number to print given number of terms of fibonacci series: ");
	scanf("%d", &n);
	fibonacci(n);
	return 0;
}
void fibonacci(int n){
	int fibo = 0, fibo1 = 1, temp;
	for(int i = 0; i < n; i++){
		printf("%d ", fibo);
		temp = fibo + fibo1;
		fibo = fibo1;
		fibo1 = temp;
	}
	printf("\n");
}
