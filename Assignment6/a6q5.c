#include <stdio.h>
int add(int x,int y)
{ 
 return x+y;
}
int sub(int x,int y)
{
 return x-y;
}
int pro(int x,int y)
{
 return x*y;
}
int div(int x,int y)
{
 return x/y;
}
int main(void)
{
 int a,b,ans;
 char c;
 printf("Enter the two numbers:\n");
 scanf("%d%d", &a,&b);
 printf("Enter '+'/'-'/'*'/'/':");
 scanf(" %c", &c);
 switch(c)
{
 case '+':  ans=add(a,b);
 break;
 case '-':  ans=sub(a,b);
 break;
 case '*':  ans=pro(a,b);
 break;
 case '/':  ans=div(a,b);
 break;
 default: printf("Wrong Input");
}
printf("%d", ans);
return 0;
}

