#include <stdio.h>
void main()
{
 double t;
 char c;
 printf("Enter F or C if your temperature is on Fahrenheit or Celcius respectively");
 scanf("%c", &c);
 if(c=='F'|| c=='f')
  {
   printf("Enter the temperature in Fahrenheit:");
   scanf("%lf",&t);
   printf("\nThe temperature in Celcius is %lf",((t-32)*5)/9);
  }
 else if(c=='C'||c=='c')
 {
  printf("Enter the temperature in Celcius:");
  scanf("%lf",&t);
  printf("\nThe temperature in Fahrenheit is %lf",((9*t/5)+32)); 
 }
else 
printf("Wrong Input");
}

