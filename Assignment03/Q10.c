/*10. Write a program to print table of given number.*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i=1; i<11; i++){
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}
