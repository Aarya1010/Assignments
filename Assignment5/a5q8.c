#include<stdio.h>
void main()
{
int c=0,m;
printf("Enter marks of 10 students");
for(int i=1;i<=10;i++)
{
scanf("%d",&m);
if(m>=45 && m<=65)
c++;
else if(m>100 || m<0)
{
printf("\nA wrong mark has been entered");
continue;
}
}
printf("\nMarks of %d students lie between 45 and 65", c);
}
