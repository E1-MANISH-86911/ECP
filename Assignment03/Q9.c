/*9. Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3*/

#include<stdio.h>
int main(){
	int n, n1, op, op1, temp;
	printf("Input:\n");
	printf("\tno1: ");
	scanf("%d", &n);
	printf("\tno2: ");
	scanf("%d", &n1);
	op=n;
	op1=n1;
	printf("Output:\n");
	while(op % op1 != 0){
		printf("\t%d %% %d = %d\n", op, op1, op % op1);
		temp = op;
		op = op1;
		op1 = temp % op1;
	}
	printf("\tGCD of %d and %d is %d \n", n, n1, op1);
	return 0;
}
