#include <stdio.h>
#include <string.h>

void copy(char str1[], char str2[], int index)
{
    str2[index] = str1[index];
    if (str1[index] == '\0') return;
    copy(str1, str2, index + 1);
}

int main()
{
    char* name = "abcdef";
    char copi[5];
    copy(name,copi,0);
    printf("copied string : %s\n",copi);
    return 0;
}
