#include <stdio.h>
#include <math.h>
void main()
{
 double a,b,c;
 printf("Enter a,b and c:");
 scanf("%lf%lf%lf", &a,&b,&c);
 double s=(a+b+c)/2;
 printf("Area of Triangle is: %lf", sqrt(s*(s-a)*(s-b)*(s-c)));
 }

