/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a[50]={2,6,10,14,18,3,7,11,15,19},p,e,i;
printf("enter the postion of the element\n");
scanf("%d",&p);
printf("Enter the element\n");
scanf("%d",&e);
for(i=p-1;i<=9;i++)
{
    a[i]=a[i+1];
}
for(i=0;i<10;i++)
printf("%d\t",a[i]);


    return 0;
}
