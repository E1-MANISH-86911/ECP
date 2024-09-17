/*5. Write a function to print a given number in binary format.*/
#include<stdio.h>
void decimal_to_binary(int n);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Decimal to binary conversion: ");
	decimal_to_binary(n);
	printf("\n");
	return 0;
}
void decimal_to_binary(int n){
	if(n==0){
		return;
	}
	decimal_to_binary(n/2);
	printf("%d", n%2);
}
