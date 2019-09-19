#include <stdio.h>
void main()
{
double a,b,c;
printf("Enter 3 numbers");
scanf("%lf%lf%lf",&a, &b, &c);
double d=(a-b)/(b+c);
printf("%lf",d);
}
