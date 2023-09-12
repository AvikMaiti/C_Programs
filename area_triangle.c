// area of a triangle with three side

// header file
#include<stdio.h>
#include<math.h>

// main function
void main()
{
    typedef int x;
    x a,b,c,area,s;
    printf("Enter three sides of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle= %d",area);
}