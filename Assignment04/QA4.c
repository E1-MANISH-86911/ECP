/*4. In above program, division may fail if denominator is zero. Use global variable as an error flag to
avoid this problem.*/

#include<stdio.h>
#include<stdbool.h>
bool flag = 0;
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
				  float d = Div(a, b);
				  if(flag == 1){
					  printf("The result is printing infinity.\n");
				  }
				  else{
					  printf("Division: %0.2f\n", d);
				  }
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
	if(b == 0){
		flag = 1;
		return flag;
	}
	else{
		return a / b;
	}
}
