#include <stdio.h>
void main()
{
printf("Enter a character");
char c;
scanf("%c", &c);
if(c>='a'&& c<='z' )
{
printf("%c is an alphabet in lower case",c);
switch(c)
{
case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
printf("\n It is a vowel");
break;
default: printf("\n It is a consonant");
}
}
else if(c>='A' && c<='Z')
printf("%c is an alphabet in upper case",c);
else if(c>='0' && c<='9')
{
printf("%c is a number\n",c);
int i=(int)c;
 if(i%2==0)
 printf("Divisible by 2");
 else 
printf("Not divisible");
}
else
printf("Other character");
}

