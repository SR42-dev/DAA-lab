#include <stdio.h>
#include <string.h>

// Function to print all sub strings
int subString(char str[], int n)
{
	int numops = 0;
	
	// Pick starting point
	for (int len = 1; len <= n; len++)
	{
		// Pick ending point
		for (int i = 0; i <= n - len; i++)
		{
			// Print characters from current
			// starting point to current ending
			// point.
			int j = i + len - 1;		
			for (int k = i; k <= j; k++) printf("%c", str[k]);
			printf("\n");
			numops++;
		}
	}
	
	return numops;
}

// Driver program to test above function
int main()
{
	char str[] = "abcdef";
	
	printf("Number of operations in total : %d\n", subString(str, strlen(str)));
	
	return 0;
}

