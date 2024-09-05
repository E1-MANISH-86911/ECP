/*7. Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9
3
6
1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
*/
#include<stdio.h>
int main(){
int n;
printf("Enter a four digit number: ");
scanf("%d", &n);
int a=n, b=n, c=n;
printf("a. %d	", a/1000);
a%=1000;
printf("%d	", a/100);
a%=100;
printf("%d	", a/10);
a%=10;
printf("%d\n", a);
printf("b. %d = ", b);
printf("%d000 + ", b/1000);
b%=1000;
printf("%d00 + ", b/100);
b%=100;
printf("%d0 + ", b/10);
b%=10;
printf("%d \n", b);
printf("c. %d", c%10);
c/=10;
printf("%d", c%10);
c/=10;
printf("%d", c%10);
c/=10;
printf("%d\n", c);
return 0;
}
