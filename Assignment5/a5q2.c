#include<stdio.h>
void main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
n=n/10;
switch(n)
{
case 10:
case 9:printf("A grade");
break;
case 8:
case 7:
case 6:printf("B grade");
break;
case 5:printf("C grade");
break;
case 4:
case 3:printf("D grade");
break;
case 2:
case 1:
case 0:printf("Fail");
}
}

