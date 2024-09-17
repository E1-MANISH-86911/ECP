/*5. Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120*/

#include<stdio.h>
int main(){
	int n, fact = 1;
	printf("Input: ");
	scanf("%d", &n);
	printf("Output: ");
	while(n){
		if(n == 1)
			break;
		printf("%d * ",n);
		fact *= n;
		n--;
	}
	printf("%d = %d\n", n, fact);
	return 0;
}
