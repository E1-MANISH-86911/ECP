/*15. Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.*/

#include<stdio.h>
int main(){
	char choice; 
	float a, b, output=0;
	do{
		printf("Calculator Menu: \n");
		printf("1. Enter 0 to exit from the calculator program.\n");
		printf("2. Enter + to perform addition.\n");
		printf("3. Enter - to perform substruction.\n");
		printf("4. Enter * to perform multiplication.\n");
		printf("5. Enter / to perform division.\n");
		printf("Enter first number: ");
		scanf("%f", &a);
		printf("Enter second number: ");
		scanf("%f", &b);
		printf("Enter the choice: ");
		scanf("%*c%c", &choice);
		switch(choice){
			case '0' :{
				break;
			}
			case '+' :{
				output = a + b;
				printf("Addition = %0.2f\n", output);
				break;
			}
			case '-':{
				output = a - b;
				printf("Substruction = %0.2f\n", output);
				break;
			}
			case '*':{
				output = a * b;
				printf("Multiplication = %0.2f\n", output);
				break;
			}
			case '/':{
				if(b == 0){
					printf("Division = Infinity!\n");
				}
				else{
					output = a / b;
					printf("Division = %0.2f\n", output);
				}
				break;
			}
			default:{
				printf("Invalid choice.\n");
				break;
			}
		}
	}while(choice != '0');
		return 0;
}
