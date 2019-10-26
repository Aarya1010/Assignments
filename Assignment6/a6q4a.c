#include<stdio.h>
void main()
{
  int a=1,b=1;
  while(a<=5)
  { b=1;
    while(b<=10)
    {
      printf("%d\t",a*b);
      b++;
    }
    printf("\n");
    a++; 
  }
}
