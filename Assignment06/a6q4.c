/***Write a function to remove all occurrences of any character in string1 from the string2.**/

#include<stdio.h>
#include<string.h>


void fun(const char *s1,char *s2){
	int i;
	int j=0;

	for(i=0;s2[i]!='\0';i++){
		if(strchr(s1,s2[i])==NULL){
			s2[j++]=s2[i];
		}
	}
	s2[j]='\0';
	
}	
int main(){
	char s2[]="abcdefabc";
	char s1[]="abc";
	fun(s1,s2);
	printf("%s",s2);
	return 0;
}

