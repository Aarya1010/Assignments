#include<stdio.h>
void main()
{
printf("Enter 10 numbers");
int i=0,sumo=0,sume=0,n;
while(i<=10)
{
scanf("%d", &n);
if(n%2==0)
sume=sume+n;
else
sumo=sumo+n;
i++;
}
printf("\nSum of EVEN numbers is %d \nSum of ODD numbers is %d", sume, sumo);
}




