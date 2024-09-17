/*16. Write a program to develop a very simple version of the ''guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message “congrats! You won.” if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand( ), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n, count=0, magic;
	printf("Generation of magic number: \n");
	srand(time(NULL));
	magic = (rand() % (1000 - 1 + 1)) + 1;
	do{
		printf("Enter a number to guess a magic number: ");
		scanf("%d", &n);
		count++;
		if(magic == n){
			printf("Congrats! You won.\n");
		}
		else if(n<magic){
			printf("** left **\n");
		}
		else if(n>magic){
			printf("** right **\n");
		}
	}while(count != 10);
	return 0;
}
