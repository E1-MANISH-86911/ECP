/*6. Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/
#include<stdio.h>
int main(){
	int n, m, rev=0;
	printf("Enter a five digit number: ");
	scanf("%d", &n);
	m=n;
	rev=m%10;
	rev*=10;
	m/=10;
	rev+=m%10;
	rev*=10;
	m/=10;
	rev+=m%10;
	rev*=10;
    m/=10;
	rev+=m%10;
	rev*=10;
    m/=10;
	rev+=m%10;
    m/=10;
	if(n==rev){
		printf("%d is a palindrome number.\n", n);
	}
	else{
		printf("%d is not a palindrome number.\n", n);
	}
	return 0;
}
