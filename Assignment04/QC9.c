/* 9. Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter.*/

#include<stdio.h>
float add(float *a, float *b);
float sub(float *a, float *b);
float mul(float *a, float *b);
float div(float *a, float *b);
int main(){
	char choice; 
	float a, b;
	do{
		printf("Calculator Menu: \n");	
		printf("1. Enter + to perform addition.\n");
		printf("2. Enter - to perform substruction.\n");
		printf("3. Enter * to perform multiplication.\n");
		printf("4. Enter / to perform division.\n");
		printf("5. Enter 5 to exit from calculator program.\n");
		printf("Enter first number: ");
		scanf("%f", &a);
		printf("Enter second number: ");
		scanf("%f", &b);
		printf("Enter the choice: ");
		scanf("%*c%c", &choice);
		switch(choice){
			case '+' :{
				printf("Addition = %0.2f\n", add(&a, &b));
				break;
			}
			case '-':{
				printf("Substruction = %0.2f\n", sub(&a, &b));
				break;
			}
			case '*':{
				printf("Multiplication = %0.2f\n", mul(&a, &b));
				break;
			}
			case '/':{
				if(b == 0){
					printf("Division = Infinity!\n");
				}
				else{
					printf("Division = %0.2f\n", div(&a, &b));
				}
				break;
			}
			case '5' :{
				printf("Exit.\n");
				break;
			}
			default:{
				printf("Invalid choice.\n");
				break;
			}
		}
	}while(choice < '5');
		return 0;
}

float add(float *a, float *b){
	return *a+*b;
}
float sub(float *a, float *b){
	return *a-*b;
}
float mul(float *a, float *b){
	return *a * *b;
}
float div(float *a, float *b){
	return *a / *b;
}
