#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>=b && a>=c)
        printf("The Largest Number is %d",a);
    if(b>=a && b>=c)
        printf("The Largest Number is %d",b);
    if(c>=a && c>=b)
        printf("The Largest Number is %d",c);
        
    return 0;
}