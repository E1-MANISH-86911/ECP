/*1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results. */

#include<stdio.h>
int main(){
	char a, b;
	int c, d;
	long e, f;

	printf("Enter the char values: ");
        scanf("%c %c", &a, &b);
        printf("Sum of char values = %d\n", (a+b));
        printf("Difference of char values = %d\n", (a-b));
        printf("Product of char values = %d\n", (a*b));

	printf("Enter the int values: ");
	scanf("%d%d", &c, &d);
	printf("Sum of int values = %d\n",(c+d));
	printf("Difference of int values = %d\n", (c-d));
	printf("Product of int values  = %d\n", (c*d));

	printf("Enter the long values: ");
        scanf("%ld%ld", &e, &f);
        printf("Sum of long values = %ld\n",(e+f));
        printf("Difference of long values = %ld\n", (e-f));
        printf("Product of values = %ld\n", (e*f));

	return 0;
}
