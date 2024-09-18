/***Write a function to convert a number to its roman equivalent. Also write a function to convert a
roman number to decimal equivalent.********/

#include<stdio.h>
#include<string.h>

void decimalToRoman(int num, char roman[]) {
    
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	
    int i=0;
	roman[0]='\0';
	while(num>0){
		while(num>=values[i]){
			strcat(roman,symbols[i]);
			num=num-values[i];
			}
		i++;
		}

}

int romanToDecimal(char roman[]) {
   
    int values[26];  
    values['I' - 'A'] = 1;
    values['V' - 'A'] = 5;
    values['X' - 'A'] = 10;
    values['L' - 'A'] = 50;
    values['C' - 'A'] = 100;
    values['D' - 'A'] = 500;
    values['M' - 'A'] = 1000;

    int i;
	int next,curr;
	int tot=0;
	int len=strlen(roman);
	for(i=0;i<len;i++){
		curr=values[roman(i)-'A'];

		if((i+1)<len)
		next=values[roman(i+1)-'A'];
		else
		next=0;

		if(curr<next)
		tot-=curr;
		else
		tot+=curr;
	}
	return tot;
}

int main(){
	int num=1994;
	char roman[20];
	decimalToRoman(num,roman);
	printf("Roman numaral for %d is %s\n",num,roman);
	char roman1[] = "MCMXCIV";
    int decimal = romanToDecimal(roman1);
    printf("Decimal equivalent of %s is %d\n", roman1, decimal);
	return 0;
	}
	
