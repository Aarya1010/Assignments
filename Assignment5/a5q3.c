#include<stdio.h>
void main()
{
printf("Enter a number:");
char c;
scanf("%c", &c);
switch(c)
{
case 'm':
case 'M':printf("March and May");
break;
case 'j':
case 'J': printf("January, June and July");
break;
case 'f':
case 'F':printf("February");
break;
case 'a':
case 'A':printf("April and August");
break;
case 's':
case 'S':printf("September");
break;
case 'o':
case 'O':printf("October");
break;
case 'n':
case 'N':printf("November");
break;
case 'd':
case 'D':printf("December");
break;
default: printf("No month starts with %c", c);
}
}

