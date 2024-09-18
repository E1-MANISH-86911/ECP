/**char* strrev(char* str);**/

#include<stdio.h>
#include<string.h>
char* strrev(char *str);

int main(){
	char str[20]="manish vemula";
	printf("%s",strrev(str));
	return 0;
	}

char* strrev(char* str) {
    int len=strlen(str);
	char *start=str;
	char *end=str+len-1;
	while(start<end){
		char temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
		}
	return str;
}

