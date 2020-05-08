#include<stdio.h>

int main()
{
    int n,r=0,t;
    printf("Enter the Value : ");
    scanf("%d",&n);
    t =n;
    
    while(t!=0) {
        r = r*10;
        r = r+t%10;
        t =t/10;
    }
    if(n==r)
        printf("%d is a Palindrome Number",n);
    else
        printf("It is not a Palindrome Number");
    
    return 0;
}