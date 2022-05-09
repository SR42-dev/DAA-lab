// integer representation
#include <stdio.h>

void grayCode(int n, int *code)
{
	if (n == 0)
	{
		printf("\n  %d", *code);
		return;
	}
	grayCode(n - 1, code);
	*code = *code ^ (1 << (n - 1));
	grayCode(n - 1, code);
}

void findGraycode(int n)
{
	if (n <= 0) return;
	printf("\n %d bit gray code ", n);
	int code = 0;
	grayCode(n, & code);
	printf("\n");
}
int main()
{
	int n = 3;
	findGraycode(n);
	
	return 0;
}
