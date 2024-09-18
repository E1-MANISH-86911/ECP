/***3. Write a function to remove all occurrences of given character from the string.***/

#include<stdio.h>
#include<string.h>

void fun(char *str, char ch) {
	int len=strlen(str);
	int i,j;
	for(i=0,j=0;i<len;i++){
		if(str[i]!=ch){
			str[j++]=str[i];
		}
	}
	str[j]='\0';
	printf("%s",str);
}
			

int main() {
    char str[20] = "manish vemula";
    char ch = 'a';
    fun(str, ch);
    return 0;
}

