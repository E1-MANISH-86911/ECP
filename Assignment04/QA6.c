/*6. Write a function to print Pascal triangle of given number of rows.*/
#include<stdio.h>
void Print_Pascal_Triangle(int n);
int main(){
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	Print_Pascal_Triangle(n);
	return 0;
}
void Print_Pascal_Triangle(int n){
	int c=1;
       for(int i=0; i<5; i++){
           for(int k=1; k<=5-i; k++){
               printf(" ");
           }
          for(int j=0; j<=i; j++){
              if(j==0 || i==0){
                  c=1;
              }
              else{
                  c=c*(i-j+1)/j;
              }
              printf("%d ", c);
          }
          printf("\n");
      }

}
