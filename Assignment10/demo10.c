/***collatz conjure
1.num
2.if num is even-->num/2
3.if num is odd-->3*num+1=>num+2*num+1
4.go to step 1 till it reaches "1"
example: num=13
output: 13,40,20,10,5,16,8,4,2,1
***/

#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	printf("series is %-4d",num);
	while(num!=1){
		if(num&1){
			num=num+(num<<1)+1;
		}
		else{
			num=num>>1;
			printf("%-4d",num);
		}
	}
	printf("\n");
return 0;
}
