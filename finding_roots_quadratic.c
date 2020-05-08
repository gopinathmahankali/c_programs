#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,realPart,imaginaryPart;
    printf("Enter the Coefficients of Three Numbers : ");
    scanf("%lf%lf%lf",&a,&b,&c);
    
    discriminant = b * b - 4 *a * c;
    
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.2lf \n Root2 = %.2lf",root1,root2);
    }
    else if (discriminant == 0)
    {
        root1 == root2 == (-b)/(2*a);
        printf("Root1 == Root2 = %.2lf ;",root2);
    }
    else
    {
        realPart = (-b)/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        
        printf("Root1 = %.2lf + %.2lfi and \n Root2 = %.2lf - %.2lfi",realPart,imaginaryPart,realPart,imaginaryPart);
    }
    return 0;
}