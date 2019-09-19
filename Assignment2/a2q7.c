#include <stdio.h>
void main()
{
 int r,a,sum=0,pro=1;
 printf("Enter a three digit number:");
 scanf("%d", &a);
 while(a!=0)
{
 r=a%10;
 a=a/10;
 sum=sum+r;
 pro=pro*r;
}
printf("The sum is %d and the product is %d", sum,pro);
}
