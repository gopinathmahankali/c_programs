#include<stdio.h>
int main() {
int first,second,temp;

printf("Enter the First number : ");
scanf("%d",&first);
printf("Enter the second number :");
scanf("%d",&second);

temp = first;
first = second;
second = temp;

printf("After First : %d\n",first);
printf("After Second : %d",second);
return 0;
}