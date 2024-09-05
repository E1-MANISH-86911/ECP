/*6. Write a program to accept an integer value and print its table.*/
#include<stdio.h>
int main(){
	int n=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d table: \n", n);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", n*1, n*2, n*3, n*4, n*5, n*6, n*7, n*8, n*9, n*10);
	return 0;
}
