/**Write functions to calculate addition, subtraction, multiply two matrices of 3x3.***/

#include<stdio.h>

void add(int arr1[][100],int arr2[][100],int r, int c);
void sub(int arr1[][100],int arr2[][100],int r, int c);
void mul(int arr1[][100],int arr2[][100],int r,int c);
void accept(int arr[][100],int r,int c);
void print(int arr[][100],int r,int c);

int main(){
int r,c;
scanf("%d%d",&r,&c);
int arr1[r][c];
int arr2[r][c];
accept(arr1,r,c);
accept(arr2,r,c);
print(arr1,r,c);
print(arr2,r,c);
sub(arr1,arr2,r,c);
add(arr1,arr2,r,c);
mul(arr1,arr2,r,c);
return 0;
}

void add(int arr1[][100],int arr2[][100],int r,int c){
	int sum[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sum[i][j]=arr1[i][j]+arr2[i][j];
			printf("%d",sum[i][j]);
		}printf("\n");
	}
}

void sub(int arr1[][100],int arr2[][100],int r,int c){
	int sub[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sub[i][j]=arr1[i][j]-arr2[i][j];
			printf("%d",sub[i][j]);
		}printf("\n");
	}
}
void mul(int arr1[][100],int arr2[][100],int r,int c){
	int mul[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		mul[i][j]=arr1[i][j]*arr2[i][j];
			printf("%d",mul[i][j]);
		}printf("\n");
	}
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
			
