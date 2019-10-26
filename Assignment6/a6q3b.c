#include<stdio.h>
void main()
{
 int c,i=2,j;
 while(i<=500)
 {
  c=0;
  j=1; 
  while(j<=i)
  {
   if(i%j==0)
   {
    c++;
   }
   j++;
  }
 if(c==2)
printf("%d\n",i);
i++; 
}
}

