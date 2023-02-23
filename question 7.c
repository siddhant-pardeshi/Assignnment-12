//Write a recursive function to print squares of first N natural numbers

#include<stdio.h>

void squares(int n)
{
    if (n==1)
     {
         printf("1\n");
        return;
     }
     squares(n-1);
     printf("%d \n",n*n);
}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

squares(n);

return 0;
}
