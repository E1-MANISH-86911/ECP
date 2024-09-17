/*9. Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.*/
#include<stdio.h>
#include<stdbool.h>
bool check;
bool isPrime(int n);
void Print_Prime_Numbers(int a, int b);
int main(){
	int a, b;
	printf("Enter two numbers to represent starting no and ending no: ");
	scanf("%d %d", &a, &b);
	Print_Prime_Numbers(a, b);
	return 0;
}
void Print_Prime_Numbers(int a, int b){
	for(int i=a; i<=b; i++){
		if(isPrime(i)==true){
			printf("%d ", i);
		}
		else{
			continue;
		}
	}
	printf("\n");
}
bool isPrime(int n){
	check = true;
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			check = false;
		}
		else if(n==0 || n==1){
			check = false;
		}
	}
	return check;
}
