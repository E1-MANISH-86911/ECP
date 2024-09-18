/***Write a function to which accepts a number, base and character pointer and converts number to
a string i.e. simulate itoa().
char* itoa(int value, char *string, int base);

steps:
1.handle negative numbers for basee 10
2.by loop, convert digit to character
3.add - for negative numbers for base 10
4. null terminate the string
5.reverse the string
6.return string
***/

#include <stdio.h>
#include <string.h>

char* itoa(int value, char str[], int base) {
    int isnegative=0;

	if(value<0 & base==10){
		isnegative=1;
		value=-value;
	}
	int rem;
	int i=0;
	if(value==0){
	str[i++]='0';}
	else{
	while(value>0){
		int digit=value%base;
		if(digit>9){
			str[i++]=(digit-10)+'A';
			}
		else{
			str[i++]=digit+'0';
		}
		value=value/base;
		}
	}
	if(isnegative){
		str[i++]='-';
	}
	str[i]='\0';
	int start=0;
	int end=i-1;
	while(start<end){
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	return str;
}

int main() {
    char buffer[20];

    printf("Decimal: %s\n", itoa(1234, buffer, 10));
    printf("Hexadecimal: %s\n", itoa(1234, buffer, 16));
    printf("Binary: %s\n", itoa(1234, buffer, 2));

    return 0;
}

