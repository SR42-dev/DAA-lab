#include <stdio.h>
#include <limits.h>

/*

// using two comparisons, no sentinel

int main()
{
	int a[16];
	int n;
	int v;
	int j;
	
	printf("Input the number of array elements (less than 16) : ");
	scanf("%d", &n);
	
	printf("Input the elements of the array seperated by spaces : ");
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	for(int i = 1; i < n; i++)
	{
		v = a[i];
		j = i - 1;
		
		while((j >= 0) && a[j] > v)
		{
			a[j + 1] = a[j];
			j -= 1;
		}
		
		a[j + 1] = v;
	}
	
	printf("Sorted array after insertion sort : ");
	for(int i = 0; i < n; i++) printf("-%d-", a[i]);
	printf("\n");
	
	return 0;
}

*/

// using one comparison with sentinel

int main()
{
	int a[16];
	int n;
	int v;
	int j;
	
	printf("Input the number of array elements (less than 16) : ");
	scanf("%d", &n);
	
	a[0] = INT_MIN;
	
	printf("Input the elements of the array seperated by spaces : ");
	n++;
	for(int i = 1; i < n; i++) scanf("%d", &a[i]);
	
	for(int i = 1; i < n; i++)
	{
		v = a[i];
		j = i - 1;
		
		while(a[j] > v)
		{
			a[j + 1] = a[j];
			j--;
		}
		
		a[++j] = v;
	}
	
	printf("Sorted array after insertion sort : ");
	for(int i = 1; i < n; i++) printf("| %d |", a[i]);
	printf("\n");
	
	return 0;
}
