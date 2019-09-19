#include <stdio.h>
#include <math.h>
void main()
{
int d;
printf("Enter in Degrees");
scanf("%d",&d);
float r=((d*3.14)/180);
printf("%0.2f",sin(r));
}
