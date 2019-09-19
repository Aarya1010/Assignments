#include <stdio.h>
void main()
{
 int a,b,c;
 printf("Enter 3 numbers:");
 scanf("%d%d%d",&a,&b,&c);
 printf("The largest is %d", a>b?((a>c)?a:c):(b>c)?b:c);
printf("\nThe smallest is %d",a<b?((a<c)?a:c):(b<c)?b:c);
}
