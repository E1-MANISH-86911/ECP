/*1. Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
*******/

#include<stdio.h>
int main(){
	char ch;
	int n;
	printf("Input: \n");
	printf("\tCharacter: ");
	scanf("%c", &ch);
	printf("\tNumber: ");
	scanf("%d", &n);
	printf("Output:\n\t");
	while(n--){
		printf("%c", ch);
	}
	printf("\n");
	return 0;
}
