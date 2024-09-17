/*6. Write a function to print a given number in hexadecimal format.*/
#include<stdio.h>
void decimal_to_hexadecimal(int n);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Decimal to hexadecimal: ");
	decimal_to_hexadecimal(n);
	printf("\n");
	return 0;
}
void decimal_to_hexadecimal(int n){
	int i=1, j, temp;
	char hexadecimal[100];
	while(n != 0){
		temp = n % 16;
		if(temp < 10){
			temp = temp + 48;
		}
		else{
			temp = temp + 55;
		}
		hexadecimal[i++] = temp;
		n = n / 16;
	}
	for(j = i - 1; j > 0; j--){
		printf("%c", hexadecimal[j]);
	}
}
