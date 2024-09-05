/*3. Print the ASCII value of user entered character in decimal, hex, octal format and also print the character for user entered ASCII value.*/

#include<stdio.h>
int main(){
	char c;
	int a;
	printf("Enter a character value: ");
	scanf("%c", &c);
	printf("Character to decimal: %d\n", c);
	printf("Character to hexadecimal: %x\n", c);
	printf("Character to octal: %o\n", c);
	printf("Enter a ASCII value of character: ");
	scanf("%d", &a);
	printf("ASCII value to character: %c\n", a);
	return 0;
}
