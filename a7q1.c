#include<stdio.h>
int fact(int);
int f;
void main()
{
 int x,sum=0;
 printf("Enter a number!");
 scanf("%d",&x);
 for(int i=1;i<=x;i++)
 { f=fact(i);
   sum=sum+f/i;
 }
printf("The sum is %d.", sum);
}


int fact(int i)
{ f=1;
  for(int y=1;y<=i;y++)
  {
   f=f*y;
  }
  return f;
}

