#include <stdio.h>
#include <stdlib.h>

// merges two subarrays of arr[].
// first subarray is arr[l to m]
// second subarray is arr[m+1 to r]

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	// auxillary arrays
	int L[n1], R[n2];

	// copying data to auxillary arrays
	for (i = 0; i < n1; i++) L[i] = arr[l + i];
	for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

	// merging the auxillary arrays back into arr[l to r]
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	
	while (i < n1 && j < n2) 
	{
	
		if (L[i] <= R[j]) 
		{
			arr[k] = L[i];
			i++;
		}
		
		else 
		{
			arr[k] = R[j];
			j++;
		}
		
		k++;
	}

	// copying remaining elements of the leftover arrays
	
	while (i < n1) 
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) 
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

// merge sort (with recursive split)
// l is for left-most index and r is right-most index of the subarray of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
	if (l < r) 
	{
		// same purpose as (l+r)/2 i.e.; to find mid element, but avoids out of bound condition for value of l (segmentation fault)
		int m = l + ((r - l) / 2);

		// splitting first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		// merging pairs at a time while simultaneously sorting in order
		merge(arr, l, m, r);
	}
}

// print array
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++) printf("%d ", A[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("\ninitial array : \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nsorted array : \n");
	printArray(arr, arr_size);
	printf("\n");
	
	return 0;
}

