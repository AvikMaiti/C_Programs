// area of triangle using three sides

// Header file
#include<stdio.h>
#include<math.h>

// main function
int main(void)
{
    float a,b,c,s,area;
    printf("Enter three side of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle = %.2f",area);
}