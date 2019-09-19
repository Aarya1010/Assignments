#include <stdio.h>
#include <math.h>
void main()
{
 float p,r,t;
 printf("Enter the principal, rate and time for Simple Interest\n");
 scanf("%f%f%f", &p, &r, &t);
 printf("Simple interest is %f .\n", (p*r*t/100));
 printf("Enter Principal, Rate and time");
 float pc,rc;
 int tc;
 scanf("%f%f%d", &pc, &rc, &tc);
 printf("Compound Interest is %f.", (p*pow((1+rc/100),tc)));
}


