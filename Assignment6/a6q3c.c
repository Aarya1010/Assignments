#include<stdio.h>
void main()
{
 int c,i=2,j;
 do
 {
  c=0;
  j=1; 
  do
  {
   if(i%j==0)
   {
    c++;
   }
   j++;
  }while(j<=i);
 if(c==2)
printf("%d\n",i);
i++; 
}while(i<=500);
}



