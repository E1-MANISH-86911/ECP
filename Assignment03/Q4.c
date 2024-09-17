/*4. Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120*/

#include<stdio.h>
int main(){
	int n, i = 1, fact = 1;
	printf("Input: ");
	scanf("%d", &n);
	printf("Output: ");
	while(i < n){
		printf("%d * ", i);
		fact *= i;
		i++;
	}
	fact *= i;
	printf("%d = %d\n", i, fact);
	return 0;
}
