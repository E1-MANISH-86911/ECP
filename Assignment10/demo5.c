/**binary equivalent of a given number***/

#include<stdio.h>
//int a[8];
int main(){
	int num;
	scanf("%d",&num);
	
	/***int i=num;
	int j=7;
	while(i!=0){
		int rem=i%2;
		if(rem){
			a[j]=1;
		}
		else{
			a[j]=0;
		}
		i=i/2;
	j--;
		}***/
	int i=7;
	int a[8]={0};
	while(num!=0 && i>=0){
		int rem=num%2;
		a[i]=rem;
		num=num/2;
		i--;
		}printf("\n");
	for(int j=0;j<8;j++){
	printf("%d\n",a[j]);
	}

	return 0;
}
