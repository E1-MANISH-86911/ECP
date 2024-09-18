/***to find lower and upper divisble by 4 of given num
case 1:
num=17->lower divisible=16, upper divisible=20
case 2:
num=24->lower divisible=24, upper divisible=28
****/
#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	int l;
	if(num&3){
		for(int i=num-4;i<num;i++){
			if(i&3){
				continue;
			}
			else{
				l=i;
				break;
			}
		}
	}
	else{
		l=num;
	}
	printf("lower divisible is %d\n",l);
	printf("upper divisible is %d",l+4);
return 0;
}

