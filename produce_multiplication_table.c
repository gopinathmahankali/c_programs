/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,range;
    printf("Enter the Number : ");
    scanf("%d",&n);
    printf("Enter the Range : ");
    scanf("%d",&range);
    for(i=1;i<=range;i++) {
        printf("%d * %d = %d \n",n,i,n*i);
    }

    return 0;
}
