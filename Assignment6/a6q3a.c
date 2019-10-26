#include<stdio.h>
void main()
{
 int c;
 for(int i=2;i<=500; i++)
 {
  c=0;
  for(int j=1; j<=i;j++)
  {
   if(i%j==0)
   c++;
  }
 if(c==2)
printf("%d\n",i);
}
}
