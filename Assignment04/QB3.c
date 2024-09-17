/*3. Write a function to calculate GCD of given numbers using recursion.*/

#include<stdio.h>
int GCD(int op, int op1, int temp);
int main(){
	int n, n1, op, op1, temp;
	printf("Input:\n");
	printf("\tno1: ");
	scanf("%d", &n);
	printf("\tno2: ");
	scanf("%d", &n1);
	op=n;
	op1=n1;
	printf("Output: \n GCD of %d and %d is %d\n", n, n1, GCD(op, op1, temp));
	return 0;
}
int GCD(int op, int op1, int temp){
	if(op % op1 == 0){
		return op1;
	}
	temp = op;
	op = op1;
	op1= temp % op1;
	return GCD(op, op1, temp);
}
