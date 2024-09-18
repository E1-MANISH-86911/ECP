/**strncmp()***/

#include<stdio.h>
#include<string.h>

int main(){
char s1[20],s2[20];
scanf("%[^\n]s",s1);
scanf("%*c%[^\n]",s2);
int res=strncmp(s1,s2,5);
printf("res=%d",res);
if(res==0){
printf("equal");
}
else if(res>0){
printf("greater");}
else{
printf("lesser");
}
return 0;
}
