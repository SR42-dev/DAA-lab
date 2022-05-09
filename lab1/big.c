#include <stdio.h>

int big(int a[5], int n, int i)
{
    if(n==0)
        return i;
    if(a[n-1]>i)
        i = a[n-1];
    return big(a,n-1,i);
    
}

int main()
{
    int a[] = {4,3,2,1};
    int n = 4;
    printf("%d\n",big(a,n,0));
}