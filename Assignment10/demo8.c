/***binary equivalent using bitwise operators***/

#include<stdio.h>

int main(){
int num=10;
//char num=10;
unsigned int mask=0x80000000;
//unsigned char mask=0x80;
while(mask){
if(num&mask){
	printf("1");
}
else{
	printf("0");
}
mask=mask>>1;
}
return 0;
}
