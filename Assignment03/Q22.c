//22. Print following patterns
/*
	*
	* *
	* * *
	* * * *
	* * * * *
*/
/*
	* * * * *
	* * * *
	* * *
	* *
	*
*/
/*
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
*/
/*
	5
	5 4
	5 4 3
	5 4 3 2
	5 4 3 2 1
*/
/*
			G
		E F G F E
	C D E F G F E D C
A B C D E F G F E D C B A
	C D E F G F E D C
		E F G F E
			G
*/
/*
	A
	B C
	D E F
	G H I J
*/
/*
	A B C D
	B C D
	C D
	D
*/
#include<stdio.h>
int main(){
	for(int i=0; i<5; i++){
		for(int j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0; i<5; i++){
		for(int j=i; j<5; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1; i<=5; i++){
		for(int j=1; j<=i; j++){
			printf("%d ", j);			
		}
		printf("\n");
	}
	printf("\n");
	for(int i=5; i>0; i--){
		for(int j=5; j>=i; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	printf("\n");
	int a=7;
	int b;
	int m;
	b =a-1;
	int n;
	n=a+64;
	for(int i = 0; i<((a+1)/2); i++) {
		for(int j=0; j<b; j++ ) {
			printf("  ");
		}
        b=b-2;
        m=1;
	for(int k =0; k<i*4+1; k++) {
   		if(k<=2*i){
   			printf("%c ", (n-2*i+k));
		}
   else{
       	printf("%c ", (n-m));
       	m++;
	   }
	  }
	 printf("\n");
	}
	b=2;
	for(int i=((a-1)/2-1); i>=0; i--){
		for(int j=0; j<b; j++ ) {
			printf("  ");
	}
	b=b+2;
   	m=1;
	for(int k=0; k<i*4+1; k++) {
  		if(k<=2*i){
       		printf("%c ", (n-2*i+k));
  		}
  		else{
      		printf("%c ", n-m);
      		m++;
  		}
	}
		printf("\n");
	}
	char ch = 'A';
	for(int i=0; i<5; i++){
		for(int j=0; j<i; j++){
			printf("%c ", ch);
			ch++;
		}
		printf("\n");
	}
	printf("\n");
	ch = 'A';
	for(int i=0; i<4; i++){
		ch = 'A' + i;
		for(int j=0; j<4-i; j++){
			printf("%c ", ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
