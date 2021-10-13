/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[8]={2,6,10,14,18,10,3,7},i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7-i;j++)
        {
            if(a[i]==a[j+1])
            {
                goto end;
            }
        }
    }
    end:printf("The group is not unique");

    return 0;
}
