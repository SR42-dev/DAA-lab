#include <stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter a non negative integer:\n");
    scanf("%d", &n);
    printf("%d!=%d\n",n,fact(n));
    return 0;
}