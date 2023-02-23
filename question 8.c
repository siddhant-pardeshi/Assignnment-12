//Write a recursive function to print binary of a given decimal number

#include<stdio.h>

void printbinary(n)
{
if (n==0)
    return;

  printbinary(n/2);
  printf("%d",n%2);
}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printbinary(n);

return 0;
}

