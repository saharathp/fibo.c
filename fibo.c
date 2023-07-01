#include<stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
         printf("Fibonacci Series:%d\n",fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if(n==0)
    {
    return 0;
    }
    else if(n==1)
    {
    return 1;
    }
    else
    {
    return fibo(n-1)+fibo(n-2);
    }
}