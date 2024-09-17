/*3. Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/

#include<stdio.h>
float Add(float a, float b);
float Sub(float a, float b);
float Mul(float a, float b);
float Div(float a, float b);
int main(){
    float a, b;
	char ch;
	printf("Enter 1st number: ");
	scanf("%f", &a);
	printf("Enter 2nd number: ");
	scanf("%f", &b);
	printf("Enter + for addition/ - for substruction/ * for multiplication/ / for Division: ");
	scanf("%*c%c", &ch);
	switch(ch){
		case '+': {
				  printf("Addition = %0.2f\n", Add(a, b));
				  break;
			  }
		case '-': {
				  printf("Substruction = %0.2f\n", Sub(a, b));
				  break;
			  }
		case '*': {
				  printf("Multiplication = %0.2f\n", Mul(a, b));
				  break;
			  }
		case '/': {
				  printf("Division: %0.2f\n", Div(a, b));
				  break;
			  }
		default: {
				 printf("Invalid Choice!");
				 break;
			 }
	}
	return 0;
}
float Add(float a, float b){
	return a+b;
}
float Sub(float a, float b){
	return a-b;
}
float Mul(float a, float b){
	return a*b;
}
float Div(float a, float b){
	return a/b;
}
