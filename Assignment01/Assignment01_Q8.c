/*8. Write a program to accept three integer numbers and find its average.*/
#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	float avg = (a + b + c)/3;
	printf("Average = %0.2f\n", avg);
	return 0;
}
