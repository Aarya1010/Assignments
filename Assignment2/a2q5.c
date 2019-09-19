#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter two numbers a and b");
scanf("%d%d",&a, &b);
c=a;
a=b;
b=c;
printf("Using third variable:\n a and b after swapping are %d and %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nSwapping them back without using third variable:\n a and b are %d and %d",a,b);
}

