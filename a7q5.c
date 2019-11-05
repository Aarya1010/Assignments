#include<stdio.h>
int fact(int);
void strong(int,int);
void main()
{
 int l,u;
 printf("Enter lower and upper limits\n");
 scanf("%d%d", &l, &u);
 if(l>=u)
 printf("Wrong input\n");
 strong(l,u);
}
void strong(int l, int u)
{
 int num,sum,r;
 for(int i=l;i<=u;i++)
 {
  num=i,sum=0;
  while(num!=0)
  {
   r=num%10;
   num/=10;
   sum=sum+fact(r);
  }
  if(sum==i)
  printf("%d,",i);
 }
}
int fact(int i)
{ int f=1;
  for(int y=1;y<=i;y++)
  {
   f=f*y;
  }
  return f;
}

