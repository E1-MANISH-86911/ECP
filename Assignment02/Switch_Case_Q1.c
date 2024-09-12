/*1. Write a program to display number of days in the given month and year using switch case
statement.*/

#include<stdio.h>
int main(){
int year, month;
printf("Enter a year number: ");
scanf("%d", &year);
printf("Enter a month number to display number of days in a given month: ");
scanf("%d", &month);
switch(month){
	case 1: {
			printf("January = 31\n");
			break;
	}
	case 2: {
		if((year%4==0 && year%100!=0) || year%400 == 0){
			printf("February = 29\n");
		}
		else{
			printf("February = 28\n");
		}
		break;
	}
	case 3: {
		printf("March = 31\n");
		break;
	}
	case 4: {
		printf("April = 30\n");
		break;
	}
	case 5: {
		printf("May = 31\n");
		break;
	}
	case 6: {
		printf("June = 30\n");
		break;
	}
	case 7: {
		printf("July = 31\n");
		break;
	}
	case 8: {
		printf("August = 31\n");
		break;
	}
	case 9: {
		printf("September = 30\n");
		break;
	}
	case 10: {
		printf("October = 31\n");
		break;
	}
	case 11: {
		printf("November = 30\n");
		break;
	}
	case 12: {
		printf("December = 31\n");
		break;
	}
	default: {
		printf("Invalid choice.\n");
		break;
	}
	return 0;
}
}
