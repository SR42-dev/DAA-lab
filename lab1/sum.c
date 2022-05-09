#include <stdio.h>

int sum(int a[5], int n, int* s)
{
    if(n==0)
        return 0;
    else
        (*s)++;
        return a[n-1] + sum(a,n-1,s);
        
}

int main()
{
    int a[5] = {1,2,3,4,5};
    int count=0;
    printf("%d", sum(a,5,&count));
    printf("\n%d", count);
    return 0;
}