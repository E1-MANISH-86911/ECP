/*13. Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in which the point lies. Also check for special cases point lies on x-axis, 
y-axis and origin.*/

#include<stdio.h>
int main(){
	float x, y;
	printf("Enter the value for x coordinate: ");
	scanf("%f", &x);
	printf("Enter the value for y coordinate: ");
	scanf("%f", &y);
	if(x==0 && y==0){
		printf("The cartesian co-ordinates lies on origin.\n");
	}
	else if(y==0 && (x>0 || x<0)){
		printf("The cartesian co-ordinates lies on x-axis.\n");
	}
	else if(x==0 && (y>0 || y<0)){
		printf("The cartesian co-ordinates lies on y-axis.\n");
	}
	else if(x>0 && y>0){
		printf("The cartesian co-ordinates lies on 1st quadrant.\n");
	}
	else if(x<0 && y>0){
		printf("The cartesian co-ordinates lies on 2nd quadrant.\n");
	}
	else if(x<0 && y<0){
		printf("The cartesian co-ordinates lies on 3rd quadrant.\n");
	}
	else if(x>0 && y<0){
		printf("The cartesian co-ordinates lies on 4th quadrant.\n");
	}
	return 0;
}

