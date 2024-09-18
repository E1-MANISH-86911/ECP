/**Write a function to accept a 2-D array from the user. Write another function to print the 2-D
array. Re-use these functions in rest of the assignments wherever required.**/

#include<stdio.h>


void accept(int arr[][100],int r,int c);
void print(int arr[][100],int r,int c);

int main(){
int r,c;
scanf("%d%d",&r,&c);
int arr[r][c];
accept(arr,r,c);
print(arr,r,c);
return 0;
}

void accept(int arr[][100],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}

void print(int arr[][100],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
			
