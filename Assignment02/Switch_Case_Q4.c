/*4. Write a program to display day of week from given date (day, month and year).*/
#include <stdio.h>


int main() {
    int date, month, year;
    int day;


    printf("Enter the date: ");
    scanf("%d", &date);
	printf("Enter the month: ");
	scanf("%d", &month);
	printf("Enter the year: ");
	scanf("%d", &year);
    if (month < 3) {
        month += 12;
        year--;
    }


    day = (date + (13 * (month + 1) / 5) + (year % 100) +
        ((year % 100) / 4) + ((year / 100) / 4) + 5 * (year / 100)) % 7;


    switch (day) {
        case 0:
            printf("The day is Saturday.\n");
            break;
        case 1:
            printf("The day is Sunday.\n");
            break;
        case 2:
            printf("The day is Monday.\n");
            break;
        case 3:
            printf("The day is Tuesday.\n");
            break;
        case 4:
            printf("The day is Wednesday.\n");
            break;
        case 5:
            printf("The day is Thursday.\n");
            break;
        case 6:
            printf("The day is Friday.\n");
            break;
    }

    return 0;
}
