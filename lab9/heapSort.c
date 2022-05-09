#include <stdio.h>

void swap(int *a, int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int n, int i) 
{
	// find largest among root, left child and right child
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest]) largest = left;

	if (right < n && arr[right] > arr[largest]) largest = right;

	// swap and continue heapifying if root is not largest
	if (largest != i) 
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
  	}
}

void bottomUpHeap(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);
}

void heapSort(int arr[], int n) 
{
	// build max heap
    	for(int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);
  
    	// heap sort
    	for (int i = n - 1; i >= 0; i--) 
    	{
      		swap(&arr[0], &arr[i]);
  
      		// heapify root element to get highest element at root again
      		heapify(arr, i, 0);
    	}
 }

void printArray(int a[], int n)
{
	for(int i = 0; i < n; i++) printf(" %d", a[i]);
	printf("\n");
}

int main()
{
	int h[] = {3, 5, 7, 9, 1, 2, 4, 6, 8};
	int n = sizeof(h) / sizeof(h[0]);

	printf("original array : ");
	printArray(h, n);
	
	bottomUpHeap(h, n);
	
	printf("bottom up heapified array : ");
	printArray(h, n);
	
	heapSort(h, n);
	
	printf("heap sorted array : ");
	printArray(h, n);
	
	return 0;
}
