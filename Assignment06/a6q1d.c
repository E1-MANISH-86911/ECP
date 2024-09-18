/**strcmp()***/

#include<stdio.h>
#include<string.h>

int main(){
char s1[20],s2[20];
printf("s1:");
scanf("%[^\n]s",s1);
printf("s2:");
scanf("%*c%[^\n]s",s2);

int res=strcmp(s1,s2);
printf("res=%d\n",res);
if(res==0){
printf("equal");}
else if(res>0){
printf("%s is higher than %s",s1,s2);}
else{
printf("%s is lesser than %s",s1,s2);}
return 0;
}
