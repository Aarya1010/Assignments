#include<stdio.h>
int a,c=0;
int counteven(int *);
void main()
{
 int x,n;
 printf("Enter the value of 'n'");
 scanf("%d", &n);
 printf("Enter the %d numbers",n);
 for(int i=1;i<=n;i++)
 {
  scanf("%d", &x);
  counteven(&x);
 }
 printf("%d",c);
}
 int counteven(int *a)
 {
  if(*a%2==0)
  c++;
 }
