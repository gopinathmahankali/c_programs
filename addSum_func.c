#include<stdio.h>
int addSum(int a ,int b);

int main()
{
    int n1,n2,sum;
    scanf("%d%d",&n1,&n2);
    sum = addSum(n1,n2);
    printf("sum = %d",sum);
    return 0;
}

int addSum(int a,int b)
{
    int result;
    result = a * b;
    return result;
}
