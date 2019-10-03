#include<stdio.h>
void main()
{
printf("Enter 10 numbers");
int i=1,sumo=0,sume=0,n;
do
{
scanf("%d", &n);
if(n%2==0)
sume=sume+n;
else
sumo=sumo+n;
i++;
}
while(i<=10);
printf("\nSum of EVEN numbers is %d \nSum of ODD numbers is %d", sume, sumo);
}




