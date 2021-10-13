/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a[50]={ 2,6,10,14,18,3,7,11,15,19 },p,e,i;
printf("enter the position of the element\n");
scanf("%d",&p);
printf("enter the element\n");
scanf("%d",&e);
for(i=10;i>=p-1;i--)
{
    a[i+1]=a[i];
}
a[p-1]=e;
for(i=0;i<10;i++)
printf(" %d\t",a[i]);


    return 0;
}
