#include <stdio.h>
void main()
{
int a,b,c,d;
printf("Enter three numbers a, b and c\n");
scanf("%d%d%d",&a, &b, &c);
d=a;
a=c;
c=b;
b=d;	
printf("Using fourth variable:\n a, b and c after swapping are %d , %d and %d",a,b,c);
a=a+b+c;
b=a-b-c;
c=a-b-c;
a=a-b-c;
printf("\nSwapping them now without using a fourth variable:\n a, b and c are %d, %d and %d",a,b,c);
}




