//Write a recursive function to print first N natural numbers


#include<stdio.h>

void printnum(int n)
{
    if (n==1)
     {
         printf("1\n");
        return;
     }

     printnum(n-1);
     printf("%d\n",n);
}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printnum(n);

return 0;
}
