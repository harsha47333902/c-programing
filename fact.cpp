#include<stdio.h>
int main()
{
 int n,i=1,fact=1;
 printf("Enter the number:");
 scanf("%d",&n);
    while(i<=n)
 {
  fact=fact*i;
  i++;
 }
 printf("factorial is:%d",fact);
}
