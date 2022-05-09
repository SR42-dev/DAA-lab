#include<stdio.h>
#include<stdlib.h>

int fib(int n, int *count){
    if(n==1) return 0;
    else if(n==2) return 1;
    (*count)=(*count)+2;
    return fib(n-1,count)+fib(n-2,count);
}

int main(){
    int n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int ans = fib(n,&count);
    printf("The %dth fibonacci number is: %d\n",n,ans);
    printf("No of recursive calls:%d",count);
    return 0;
}