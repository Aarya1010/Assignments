#include <stdio.h>
void main()
{
long int n,r,sum=0,b;
 printf("Enter a 3 digit number");
 scanf("%ld",&n);
 b=n;
 printf("\nIs it armstrong?\n");
 while(n!=0)
{
r=n%10;
n=n/10;
sum=sum+r*r*r;
}
printf(sum==b?"YES":"NO");
printf("\nEnter a number");
scanf("%ld", &n);
long int s=n*n;
int c=0;
b=n;
while(n!=0)
{
n=n/10;
c++;
}
printf("\nIs it automorphic?\n");
int t=1;
while(c)
{
t=10*t;
c--;
}
printf(s%t==b?"YES":"NO");
}

