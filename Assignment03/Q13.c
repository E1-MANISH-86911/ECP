/*13. Write a program to display n terms of Fibonacci series
Input: 6
Output: 0, 1, 1, 2, 3, 5*/

#include<stdio.h>
int main(){
	int fibo=0, fibo1=1, temp=0, n;
	printf("Input: ");
	scanf("%d", &n);
	printf("Output: ");
	for(int i=0; i<n-1; i++){
		printf("%d, ", fibo);
		temp = fibo;
		fibo = fibo1;
		fibo1 = fibo1 + temp;
	}
	printf("%d\n", fibo);
	return 0;
}
