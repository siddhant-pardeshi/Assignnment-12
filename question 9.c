//Write a recursive function to print octal of a given decimal number

#include<stdio.h>

void printoctal(n)
{
if (n==0)
    return;

  printoctal(n/8);
  printf("%d",n%8);
}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printoctal(n);

return 0;
}
