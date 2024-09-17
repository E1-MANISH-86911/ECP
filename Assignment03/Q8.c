/*8. Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5*/

#include<stdio.h>
int main(){
	int n, i=2, first=1;
	printf("Input: ");
	scanf("%d", &n);
	printf("Output: %d = ",n);
	while(n>1){
		if(n%i==0){
			if(!first)
				printf(" * ");
			printf("%d", i);
			n /= i;
			first = 0;
		}
		else{
			i++;
		}
	}
	printf("\n");
}
