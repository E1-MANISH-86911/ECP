/*20. Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500*/

#include<stdio.h>
#include<stdbool.h>
int main(){
	printf("a. Prime numbers betweeen 1 to 100.\n");
	bool check;
	for(int i=2; i<=100; i++){
		check = true;
		for(int j=2; j<=i/2; j++){
			if(i%j==0){
				check = false;
			}
		}
		if(check == true){
			printf("%d ", i);
		}
	}
	printf("\nb. Armstrong Number between 1 to 500.\n");
	int j, arm;
	for(int i=1; i<=500; i++){
		j = i;
		arm = 0;
		while(j != 0){
			arm += (j%10) * (j%10) * (j%10);
			j = j/10;
		}
		if(arm == i || i<10){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
