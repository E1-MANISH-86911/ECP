/*10. Write a program to accept a character c and display category of the input character.
ALPHABET
: c is a letter (65 to 90 or 97 to 122)
UPPERCASE
: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT
: c is a digit (48 to 57)
SPACE
: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER
: Not listed above
*/
#include<stdio.h>
#include<stdbool.h>
int main(){
	bool check = false;
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
		printf("ALPHABET\n");
		check = true;
	}
	if(ch >= 65 && ch <= 90){
		printf("UPPERCASE\n");
		check = true;
	}
	if(ch >= 97 && ch <= 122){
		printf("LOWERCASE\n");
		check = true;
	}
	else if(ch >= 48 && ch <= 57){
		printf("DIGIT\n");
	}
	else if(ch == 32){
		printf("SPACE\n");
		check = true;
	}
	else if(ch == 9){
		printf("TAB\n");
		check = true;
	}
	else if(ch == 13){
		printf("RETURN\n");
		check = true;
	}
	else if(ch == 10){
		printf("NEW LINE\n");
		check = true;
	}
	else if(check == false){
		printf("OTHER\n");
	}
	return 0;
}
