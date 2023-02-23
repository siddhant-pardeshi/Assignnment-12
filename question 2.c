//Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>

void printnum(int n)
{
    if (n==1)
     {
         printf("1\n");
        return;
     }
     printf("%d\n",n);
     printnum(n-1);

}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printnum(n);

return 0;
}
