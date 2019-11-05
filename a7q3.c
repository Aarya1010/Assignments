#include<stdio.h>
void compute_gross(int *,float *,float *,float *);
void main()
{int bp;
 float da,hra,gs;
 printf("Enter Basic Pay");
 scanf("%d",&bp);
 da=0.2*bp;
 hra=0.1*bp;
 compute_gross(&bp,&da,&hra,&gs);
 printf("Gross Salary is %.2f", gs);
}
void compute_gross(int *bp, float *da, float *hra, float *gs)
{
 *gs=*bp+*da+*hra;
}
