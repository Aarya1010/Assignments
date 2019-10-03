#include <stdio.h>
#include <string.h>
void main()
{
char id[100], name[100];
int n;
printf("Input the  customer ID, name and units consumed:\n");
scanf(" %s%s%d", id, name, &n);
printf("Customer ID: %s\nName: %s\nUnits consumed: %d", id, name, n);

}
