#include <stdio.h>
void main()
{
 int n,s=0,r;
 printf("Enter a number ");
 scanf("%d",&n);
 while(n!=0)
{
 r=n%10;
 s=s*10+r;
n=n/10;
}
printf("%d",s);
}
