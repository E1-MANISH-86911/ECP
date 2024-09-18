/*****strstr()****/
 #include<stdio.h>
 #include<string.h>

 int main(){
 char s[64]="This is q string";
 char sub[20]="is";
 char *ptr;
 ptr=strstr(s,sub);
 printf("str=%u",ptr);
 return 0;
 }
