/**3. Write a function to calculate the sum of elements in the given row. Write another function to
calculate the sum of elements in the given column.***/

#include<stdio.h>

void rowsum(int arr[][100],int r,int c);
void colsum(int arr[][100],int r,int c);
void accept(int arr[][100],int r,int c);
void print(int arr[][100],int r,int c);

int main(){
int r,c;
scanf("%d%d",&r,&c);
int arr[r][c];
accept(arr,r,c);
print(arr,r,c);
rowsum(arr,r,c);
colsum(arr,r,c);
return 0;
}

void rowsum(int arr[][100],int r,int c){
	for (int i = 0; i < r; i++) {
        int rowsum = 0;
        for (int j = 0; j < c; j++) {
            rowsum += arr[i][j];
        }
        printf("Row %d sum: %d\n", i, rowsum);
    }
}


void colsum(int arr[][100],int r,int c){
	for (int j = 0; j < c; j++) {
        int colsum = 0;
        for (int i = 0; i < r; i++) {
            colsum += arr[i][j];
        }
        printf("Column %d sum: %d\n", j, colsum);
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
			
