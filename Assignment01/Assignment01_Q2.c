/*2.Write a program to accept a number and print the number in character, decimal, octal and hexformats.*/

#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Character = %c\n", n);
	printf("Decimal = %d\n", n);
	printf("Octal = %o\n", n);
	printf("Hexadecimal = %x\n", n);
	return 0;
}
