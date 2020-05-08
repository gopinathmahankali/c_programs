#include <stdio.h>

int main()
{
   long long int n;
   int count = 0;
   
   printf("Enter Value : ");
   scanf("%lld",&n);
   while(n!=0) {
       n/=10;
       ++count;
   }
   printf("%d",count);
   return 0;
}
   