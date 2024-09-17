/*21. Write a program to display First 5 prime numbers after a given number.
Input: 7
Output: 11 13 17 19 23*/
#include<stdio.h>
#include<stdbool.h>
int main(){
	int n, count=0;
	bool check;
	printf("Input: ");
	scanf("%d", &n);
	while(count<5){
		n++;
		check = true;
		for(int i=2; i<=n/2; i++){
			if(n % i == 0){
				check = false;
			}
		}
		if(check == true){
			printf("%d ", n); 
			count++;
		}
	}
	printf("\n");
	return 0;
}
