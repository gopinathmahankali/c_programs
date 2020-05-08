/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    unsigned long long int fact = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0) {
        printf("You entered a negative value");
    }
    else
    {
        for(i=1;i<=n;++i) {
        fact*=i;
        }
        printf("The Factorial of %d is %llu",n,fact);
    }
        
    
    return 0;
}
