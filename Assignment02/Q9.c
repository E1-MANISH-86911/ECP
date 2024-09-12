/*9. Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.*/
#include<stdio.h>
int main(){
	int month, year;
	printf("Enter the month number: ");
	scanf("%d", &month);
	printf("Enter the year: ");
	scanf("%d", &year);
	//Using if else ladder
    printf("a. Using if else ladder.\n");
	if(month == 1 || month == 3 ||month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		if(month == 1){
			printf("No. of days in January %d are 31.\n", year);
		}
		else if(month == 3){
			printf("No. of days in March %d are 31.\n", year);
		}
		else if(month == 5){
			printf("No. of days in May %d are 31.\n", year);
		}
		else if(month == 7){
			printf("No. of days in July %d are 31.\n", year);
		}
		else if(month == 8){
			printf("No. of days in August %d are 31.\n", year);
		}
		else if(month == 10){
			printf("No. of days in October %d are 31.\n", year);
		}
		else if(month == 12){
			printf("No. of days in December %d are 31.\n", year);
		}
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11){
		if(month == 4){
			printf("No. of days in April %d are 30.\n", year);
		}
		else if(month == 6){
			printf("No. of days in June %d are 30.\n", year);
		}
		else if(month == 9){
			printf("No. of days in September %d are 30.\n", year);
		}
		else if(month == 11){
			printf("No. of days in November %d are 30.\n", year);
		}
	}
	else if(month == 2){
		if(year % 400 == 0){
				printf("No. of days in February %d are 29.\n", year);
		}
		else if(year % 100 == 0){
			printf("No. of days in February %d are 28.\n", year);
		}
		else if(year % 4 == 0){
			printf("No. of days in February %d are 29.\n", year);
		}
		else{
			printf("No. of days in February %d are 28.\n", year);
		}
	}
	else{
		printf("Invalid Month.\n");
	}
	//Using logical operator
	printf("b. Using logical operators.\n");
	if(month == 2 && ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0)){
		printf("No. of days in February %d are 29.\n", year);
	}
	else if(month == 2){
		printf("No. of days in February %d are 28.\n", year);
	}
	else if(month == 1 || month == 3 ||month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
          if(month == 1){
              printf("No. of days in January %d are 31.\n", year);
          }
          else if(month == 3){
              printf("No. of days in March %d are 31.\n", year);
          }
          else if(month == 5){
              printf("No. of days in May %d are 31.\n", year);
          }
          else if(month == 7){
              printf("No. of days in July %d are 31.\n", year);
          }
          else if(month == 8){
              printf("No. of days in August %d are 31.\n", year);
          }
          else if(month == 10){
              printf("No. of days in October %d are 31.\n", year);
          }
          else if(month == 12){
              printf("No. of days in December %d are 31.\n", year);
          }
      }
      else if(month == 4 || month == 6 || month == 9 || month == 11){
          if(month == 4){
              printf("No. of days in April %d are 30.\n", year);
          }
          else if(month == 6){
              printf("No. of days in June %d are 30.\n", year);
          }
          else if(month == 9){
              printf("No. of days in September %d are 30.\n", year);
          }
          else if(month == 11){
              printf("No. of days in November %d are 30.\n", year);
          }
      }
	  else{
	  	printf("Invalid Month.\n");
	  }
	return 0;
}
