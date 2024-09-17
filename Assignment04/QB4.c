/*4.Write a function to calculate nth term of the Fibonacci series using recursion. Write another 
function to print given number of terms of Fibonacci series.*/
#include<stdio.h>
int nth_term(int n, int fibo, int fibo1, int temp);
void display_fibo_series(int n, int fibo, int fibo1, int temp);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%dth term of fibonacci series is %d.\n", n, nth_term(n, 0, 1, 0));
	printf("Given number of terms of fibonacci series: \n");
	display_fibo_series(n, 0, 1, 0);
	printf("\n");
	return 0;
}
int nth_term(int n, int fibo, int fibo1, int temp){
	if(n==1){
		return fibo;
	}
	temp = fibo;
	fibo = fibo1;
	fibo1 = fibo1+temp;
	return nth_term(--n, fibo, fibo1, temp);
}
void display_fibo_series(int n, int fibo, int fibo1, int temp){
	if(n==0){
		return;
	}
	printf("%d ", fibo);
	temp = fibo;
	fibo = fibo1;
	fibo1 = fibo1 + temp;
	display_fibo_series(--n, fibo, fibo1, temp);
}
