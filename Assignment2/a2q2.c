#include <stdio.h>
void main()
{
 int p=10,pc=5,s=2;
 printf("\t*****LIST OF ITEMS******");
printf("\nItems\t\tPrice(Rs.)\tTotal(Rs.)\n");
printf("_______________________________________");
printf("\nPen\t\t%d\t\t%d\nPencil\t\t%d\t\t%d\nSharpener\t%d\t\t%d\n",p,p*2,pc,pc*3,s,s*1);
printf("________________________________________");
printf("\nGrand Total\t%d\t\t%d",p+pc+s,p*2+pc*3+s*1);
}
