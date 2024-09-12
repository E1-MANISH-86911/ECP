/*7. Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator*/
#include<stdio.h>
int main(){
	int year;
	printf("Enter a number: ");
	scanf("%d", &year);
	//a. Without using logical operators 
	printf("a. Without using logical operator: \n");
	if(year % 400 == 0){
		printf("%d year is a leap year. Hence it is having 365 days.\n", year);
	}
	else if(year % 100 == 0){
		printf("%d year is not a leap year. Hence it is having 366 days.\n", year);
	}
	else if(year % 4 == 0){
		printf("%d year is a leap year. Hence it is having 366 days.\n", year);
	}
	else{
		printf("%d year is not a leap year. Hence it is having 365 days.\n", year);
	}
	//b. Using logical operator
	printf("b. Using logical operator:\n");
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d year is a leap year. Hence it is having 366 days.\n", year);
	}
	else{
		printf("%d year is not a leap year. Hence it is having 365 days.\n", year);
	}
	//c. Using conditional operator
	printf("c. Conditional operator: \n");
	(year % 4 == 0 && year % 100 != 0 ) ? printf("%d year is a leap year. Hence it is having 366 days.\n", year) : (year % 400 == 0) ? printf("%d year is a leap year. Hence it is having 366 days.\n", year): printf("%d year is not a leap year. Hence it is having 365 days\n", year);
	return 0;
}
