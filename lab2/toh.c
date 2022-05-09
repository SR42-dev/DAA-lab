#include <stdio.h>

void toh(char S, char A, char D, int n, int* count)
{
    if(n==1)
        printf("Move disk %d from %c to %c\n", n, S, D);
    else
    {
        toh(S,D,A,n-1, count);
        printf("Move disk %d from %c to %c\n", n, S, D);
        toh(A,S,D,n-1, count);
        (*count)+=2;
    }
}

int main()
{
    int n=2;
    int count =0;
    char SRC='S', AUX='A', DST='D';
    toh(SRC, AUX, DST, n, &count);
    printf("%d calls\n", count+1);
    return 0;
}