#include<stdio.h>

int length(char *str){
    if(*str=='\0'&&*str!=' ') return 0;
    else return 1+length(++str);
}

int main(){
    char str[10];
    printf("enter the string:");
    scanf("%[^\n]s",str);
    int ans= length(str);
    printf("the length of the string:%d",ans);
    return 0;
}