#include <stdio.h>
void main()
{
printf("Enter a number:");
int r,n,s=0;
scanf("%d", &n);
int a=n;
while(a!=0)
{
r=a%10;
a=a/10;
s=s*10+r;
}
while(s!=0)
{
r=s%10;
s=s/10;
switch(r)
{
case 1:printf("ONE  ");
break;
case 2:printf("TWO  ");
break;
case 3:printf("THREE  ");
break;
case 4:printf("FOUR  ");
break;
case 5:printf("FIVE  ");
break;
case 6:printf("SIX  ");
break;
case 7:printf("SEVEN  ");
break;
case 8:printf("EIGHT  ");
break;
case 9:printf("NINE  ");
break;
case 0:printf("ZERO  ");
break;
}
}
}
