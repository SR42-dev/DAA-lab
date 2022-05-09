#include <stdio.h>
#include <string.h>

#define MAX 500

int t[MAX]; // shift table

void shiftTable(char* p)
{
	int i, j, m;
	m = strlen(p);
	
	for(i = 0; i < MAX; i++) t[i] = m;
	for(j = 0; j < m - 1; j++) t[p[j]] = m - 1 - j;
}

int horspool(char* src, char* p)
{
	int i, j, k, m, n;
	
	n = strlen(src);
	m = strlen(p);
	
	printf("\nLength of the text = %d\n", n);
	printf("\nLength of the pattern = %d\n", m);
	
	i = m - 1;
	while (i < n)
	{
		k = 0;
		while ((k < m) && (p[m - 1 - k] == src[i - k])) k++;
		if (k == m) return i - m + 1;
		else i += t[src[i]];
	}
	
	return -1;
}

int main()
{
	char t[] = "this is a demonstration of horspool string matching";
	char p[] = "pool";
	int res;
	
	printf("\noriginal string : %s\n", t);
	printf("\nkey pattern : %s\n", p);
	
	shiftTable(p);
	res = horspool(t, p);
	
	if(res == -1) printf("\nresult : no string found\n");
	else printf("\nstring match found at position : %d\n", res);

	return 0;
}

