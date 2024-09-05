#include<stdio.h>
#include<math.h>
int main(){
        float a, b, c, perimeter, area, s;
        printf("Enter the three sides of triangle: ");
        scanf("%f %f %f", &a, &b, &c);
        perimeter = a + b + (c*a) + b + c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Perimeter of triangle = %0.2f\n", perimeter);
        printf("Area of triangle = %0.2f\n", area);
        return 0;
}
