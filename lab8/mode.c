// finding the mode of a sorted array
#include <stdio.h>

int presortedMode(int a[], int n)
{	
	int modefrequency = 0;
	int runlength;
	int runvalue;
	int modevalue;
	int i = 0;
		
	while (i < n)
	{
		runlength = 1;
		runvalue = a[i];
		
		while (((i + runlength) < n) && (a[i + runlength] == runvalue)) runlength++;
		
		if (runlength > modefrequency)
		{
			modefrequency = runlength;
			modevalue = runvalue;
		}
		
		i += runlength;
	}
	
	return modevalue;
	
}

int main()
{
	int a[] = {0, 1, 2, 3, 3, 4, 5};
	int n = sizeof(a) / sizeof(a[0]);
	
	printf("Mode of the supplied array : %d\n", presortedMode(a, n));

	return 0;
}
