
#include<stdio.h>
void main()
{
  int a=1,b=1;
  do 
  { b=1;
    do
    {
      printf("%d\t",a*b);
      b++;
    }while(b<=10);
    printf("\n");
    a++; 
  }while(a<=5);
}



