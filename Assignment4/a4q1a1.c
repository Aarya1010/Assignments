#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 numbers");
scanf("%d%d%d",&a, &b,&c);
if(a>b)
{
if (a>c)
printf("%d",a);
if(a<c)
printf("%d",c);
}
if(b>a)
{
if(b>c)
printf("%d",b);
if(c>b)
printf("%d",c);
}
}

