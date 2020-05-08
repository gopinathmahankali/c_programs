#include <stdio.h>
#include<conio.h>

int main()
{
   double base ,exp,result;
   printf("Enter Base and exponent " );
   scanf("%lf%lf",&base,&exp);
   
   result = pow(base,exp);
   
   printf("%.lf ^ %.lf is %.2lf",base,exp,result);
   return 0;
}
   