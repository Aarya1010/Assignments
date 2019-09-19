#include <stdio.h>
void main()
{
float n;
printf("Enter a number\n");
scanf("%f",&n);
int i=(int)n;
printf("%d\n", i%10);
printf("%d\n", i%100);
printf("%d", i%1000);
}

