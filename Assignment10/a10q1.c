/***Write a function to count number of ‘1’ bits into a given number.***/

#include<stdio.h>
#include<stdint.h>
int count(int num){
	int c = 0;
    while (num) {
        c += num & 1;
        num >>= 1;
    }
return c;
}
int main(){
uint32_t  num;
scanf("%u",&num);
printf("%d",count(num));
return 0;
}
