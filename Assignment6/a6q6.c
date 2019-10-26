#include<stdio.h>
int a,b,r;
char s;
void area()
{
 printf("Enter S/R/C for square/reactangle/circle:");
 scanf(" %c", &s);
 switch(s)
 {
  case 's':
  case 'S':
  {
    printf("Enter side:");
    scanf("%d", &a);
    printf("%d",a*a);
  }
  break;
  case 'r':
  case 'R':
  {
    printf("Enter length and breadth:");
    scanf("%d%d", &a, &b); 
    printf("%d",a*b);
  }
  break;
  case 'c':
  case 'C':
  { printf("Enter radius:");
    scanf("%d", &r); 
    printf("%f",3.14*r*r);
  }
  break;
 default:("Wrong Input");
 }
}
void perimeter() 
{
 printf("Enter S/R/C for square/reactangle/circle:");
 scanf(" %c",&s);
 switch(s)
 {
  case 's':
  case 'S':
  {
    printf("Enter side:");
    scanf("%d", &a); 
    printf("%d",4*a); 
  } 
  break;
  case 'r': 
  case 'R':
  {
    printf("Enter length and breadth:");
    scanf("%d%d", &a, &b); 
    printf("%d",2*(a+b)); 
  } 
  break; 
  case 'c': 
  case 'C': 
  { printf("Enter radius:");
    scanf("%d", &r); 
    printf("%f",2*3.14*r); 
  } 
  break; 
 default:("Wrong Input"); 
 } 
}
 
 
 
void main()
{
 char c;
 printf("Enter \"P\" for perimeter or \"A\" for area:");
 scanf(" %c",&c);
 switch(c)
 {
  case 'p':
  case 'P':perimeter();
  break;
  case 'a':
  case 'A':area();
  break;
  default: printf("Wrong input");
 }
}
