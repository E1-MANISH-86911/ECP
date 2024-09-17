/*14. Write a program to accept a number and check whether it is Prime no.*/

#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	bool check = true;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n == 1 || n == 0){
		check = false;
	}
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			check = false;
		}
	}
	if(check == true){
		printf("%d is a prime number.\n", n);
	}
	else{
		printf("%d is not a prime number.\n", n);
	}
	return 0;
}
