#include<stdio.h>
void main()
{
int i=1,c=0;
start:
if(i<=200)
{
	if((i%2!=0) && (i%3!=0))
	{
	printf(" %d,", i);
        c++;
	}
i++;
goto start;
}
printf("\nThere are %d such numbers", c);
}
