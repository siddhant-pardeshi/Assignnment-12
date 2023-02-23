//Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>

void printodd(int n)
{
    if (n==1)
     {
         printf("1\n");
        return;
     }
     printf("%d \n",2*n-1);
     printodd(n-1);

}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printodd(n);

return 0;
}
