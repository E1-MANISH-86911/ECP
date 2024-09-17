/*2. Write a function to calculate power.*/
#include<stdio.h>
int power(int n, int p);
int main(){
	int n, p, o; 
	printf("Enter the number to find its power: ");
	scanf("%d", &n);
	printf("Enter the power of number: ");
	scanf("%d", &p);
	o = power(n, p);
	printf("Power of %d is %d.\n", n, o);
	return 0;
}
int power(int n, int p){
	int o = 1;
	for(int i=1; i<=p; i++){
		o *= n;
	}
	return o;
}
