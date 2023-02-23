//Write a recursive function to print first N even natural numbers

#include<stdio.h>

void printeven(int n)
{
    if (n==1)
     {
         printf("2\n");
        return;
     }
    printeven(n-1);
    printf("%d \n",2*n);

}
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printeven(n);

return 0;
}
