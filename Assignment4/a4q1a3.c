#include <stdio.h>
void main()
{
printf("Enter 3 numbers");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("%d",a>b?((a>c)?a:c):(b>c)?b:c);
}
