#include<stdio.h>
void main()
{
 int sum;
 for(int i=1;i<=500;i++)
 {
  sum=0;
  for(int j=1;j<=i/2;j++)
  {
    if(i%j==0)
    sum=sum+j;
  }
 if(i==sum)
 printf("%d\n",sum);
}
}
