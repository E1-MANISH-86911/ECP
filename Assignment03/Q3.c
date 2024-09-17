/*3.
Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
b. Reverse the number
Input: 9362
Output: 2639
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number*/

#include<stdio.h>
int main(){
	int a, b, c, c1, d, d1, check=1, rev = 0, rev1 = 0, sum = 0, palindrome = 0, armstrong=0;
	printf("a. Calculate sum of digits of integer\n");
	printf("Input: ");
	scanf("%d", &a);
	while(a != 0){
		rev1 += a % 10;
		rev1 *= 10;
		a /= 10;
	}
	rev1 = rev1 / 10;
	printf("Output: ");
	while(rev1 != 0){
		if(!check){
			printf(" + ");
		}
		printf("%d", rev1%10);
		sum += rev1 % 10;
		rev1 = rev1 / 10;
		check = 0;
	}
	printf(" = ");
	printf("%d \n", sum);
	printf("b. Reverse the number\n");
	printf("Input: ");
	scanf("%d", &b);
	while(b != 0){
		rev += b % 10;
		rev *= 10;
		b /= 10;
	}
	rev = rev / 10;
	printf("Output: %d\n", rev);
	printf("c. Check whether given number is numeric palindrome or not\n");
	printf("Input: ");
	scanf("%d", &c);
	c1 = c;
	printf("Output: ");
	while(c != 0){
		palindrome += c % 10;
		palindrome *= 10;
		c /= 10;
	}
	palindrome /= 10;
	if(c1 == palindrome){
		printf("%d is numeric a palindrome\n", c1);
	}
	else{
		printf("%d is not a numeric palindrome\n", c1);
	}
	printf("d. Check whether it is Armstrong no.\n");
	printf("Input: ");
	scanf("%d", &d);
	d1 = d;
	printf("Output: ");
	while(d != 0){
		armstrong += (d % 10) * (d % 10) * (d % 10);
		d /= 10;
	} 
	if(d1 == armstrong){
		printf("%d is an Armstrong number\n", d1);
	}
	else{
		printf("%d is not an Armstrong number\n", d1);
	}
    return 0;
}
