/*2. Write a program to crate four function calculator. Four functions are +, - , *, / */
#include<stdio.h>
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
int main(){
	float a, b;
	char ch;
	printf("Choices:\n1. + for addition\n2. - for substruction\n3. * for multiplication\n4. / for division\n");
	printf("Enter two values: ");
	scanf("%f %f", &a, &b);
	printf("Enter a choice to perform calculator operation: ");
	scanf("%*c %c", &ch);
	switch(ch){
		case '+':{
				printf("Addition = %0.2f\n", add(a, b));
				break;
			}
		case '-':{
			printf("Substruction = %0.2f\n", sub(a, b));
			break;
		}
		case '*':{
			printf("Multiplication = %0.2f\n", mul(a, b));
			break;
		}
		case '/':{
			int o = div(a, b);
			if(o == -1){
				printf("Infinity.\n");
			}
			else{
				 printf("Division = %0.2f\n", div(a, b));  
			}
			break;
		}
		default:{
			printf("Invalid choice.\n");
		}
	}
	return 0;
}
float add(float a, float b){
	return a+b;
}
float sub(float a, float b){
	return a-b;
}
float mul(float a, float b){
	return a*b;
}
float div(float a, float b){
	if(b == 0){
		return -1;
	}
	return a/b;
}
