/*5. Write a function to print a given character for a given number of times.*/
#include<stdio.h>
void print(char ch, int n);
int main(){
	char ch;
	int n;
	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("Enter a number to print above character for given number of times: ");
	scanf("%d", &n);
	print(ch, n);
	return 0;
}
void print(char ch, int n){
	for(int i=0; i<n; i++){
		printf("%c ", ch);
	}
	printf("\n");
}
