#include<stdio.h>
void main()
{
printf("Enter 10 numbers");
int sumo=0,sume=0,n;
for(int i=1;i<=10;i++)
{
scanf("%d", &n);
if(n%2==0)
sume=sume+n;
else
sumo=sumo+n;
}
printf("\nSum of EVEN numbers is %d \nSum of ODD numbers is %d", sume, sumo);
}
