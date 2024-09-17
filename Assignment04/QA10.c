/*10. Write function to check whether given year is leap or not. Write another function to print
number of days in given month.*/
#include<stdio.h>
#include<stdbool.h>
bool isLeap(int yyyy);
void display(int mm, int yyyy);
int main(){
	int mm, yyyy;
	printf("Enter the month number: ");
	scanf("%d", &mm);
	printf("Enter the year: ");
	scanf("%d", &yyyy);
	display(mm, yyyy);
	return 0;
}
bool isLeap(int yyyy){
	if((yyyy%4==0 && yyyy%100!=0) || (yyyy%400==0)){
		return true;
	}
	else{
		return false;
	}
}
void display(int mm, int yyyy){
	switch(mm){
		case 1:{
			printf("January: 31\n");
			break;
		}
		case 2:{
			if(isLeap(yyyy)==true){
				printf("February: 29\n");
			}
			else if(isLeap(yyyy)==false){
				printf("February: 28\n");
			}
			break;
		}
		case 3:{
			printf("March: 31\n");
			break;
		}
		case 4:{
			printf("April: 30\n");
			break;
		}
		case 5:{
			printf("May: 31\n");
			break;
		}
		case 6:{
			printf("June: 30\n");
			break;
		}
		case 7:{
			printf("July: 31\n");
			break;
		}
		case 8:{
			printf("August: 31\n");
			break;
		}
		case 9:{
			printf("September: 30\n");
			break;
		}
		case 10:{
			printf("October: 31\n");
			break;
		}
		case 11:{
			printf("November: 30\n");
			break;
		}
		case 12:{
			printf("December: 31\n");
			break;
		}
		default:{
			printf("Invalid month!\n");
			break;
		}
	}
}
