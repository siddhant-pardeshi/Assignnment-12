//Write a recursive function to print reverse of a given number

#include<stdio.h>

void printreverse(int n)
{
if (n==0)
    return;
printf("%d",n%10);
printreverse(n/10);
}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printreverse(n);

return 0;
}
