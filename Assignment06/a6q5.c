/**Write a function to converts a string of digits into its numeric equivalent i.e. simulate atoi().
int atoi(const char* string);****/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int atoi(const char* str){
	int i=0;
	int sign=1;
	if(str[0]=='-'){
		sign=-1;
		i++;
	}

	int res=0;
	while(str[i]!='\0'){
		if(isdigit(str[i])){
		res=res*10+(str[i]-'0');
		}
		else{
		return 0;
		}
		i++;
	}
return sign*res;
}
int main(){
	char str[10]="12345";
	printf("int value is %d\n",atoi(str));
	return 0;
	}
