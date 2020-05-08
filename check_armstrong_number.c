#include <stdio.h>
#include <math.h>
int main() 
{
    int n,temp,rem,c=0,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    //copying n value to temp;
    temp=n;
    
    //loop for counting(c) in given number
    while(temp!=0) {
        c++;
        temp = temp/10;
        }
        
    //reinitialising temp again to number
    temp=n;
    
    //extracting last value and do power func with count
    while(temp!=0) {
        rem=temp%10;
        sum = sum+pow(rem,c);
        temp=temp/10;
    }
    //checking by comparing sum with n(original given number) 
    if(sum==n) 
        printf("Given is an Armstrong Number");
    else
        printf("Given is not an Armstrong Number");
        
    return 0;
}