/*2. Write a function to calculate power using recursion.*/
#include<stdio.h>
int power(int n, int p);
int main(){
	int n, p;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter the power: ");
	scanf("%d", &p);
	printf("%d power of %d is %d. \n", p, n, power(n, p));
	return 0;
}
int power(int n, int p){
	if(p==0){
		return 1;
	}
	return n*power(n, --p);
}
