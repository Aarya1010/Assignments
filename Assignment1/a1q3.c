#include <stdio.h>
#include <string.h>
void main()
{
int i;
float f;
char c;
char s[100];
printf("Enter an Integer, a Decimal, a Character and a String:");
scanf("%d%f %c %s ", &i, &f, &c , s);
printf(" Integer is %d \n Decimal is %f \n Character is %c \n String is %s",i,f,c,s);
} 
