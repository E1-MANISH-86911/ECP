/*7. Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24*/

#include<stdio.h>
int main(){
	int i=1, j, n;
	printf("Input: ");
	scanf("%d", &n);
	while(i<=n){
		j = 1;
		while(j<=n){
			if((i*j==n) && (i<j)){
				printf("%d * %d = %d\n", i, j, i*j);
			}
			j++;
		}
		i++;
	}
	return 0;
}
