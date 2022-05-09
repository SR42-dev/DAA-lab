#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
	int n = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	int sum = 0;
	int wish = 1;
	
	do 
	{
		int curr;
		
		printf("Input element :");
		scanf("%d", &curr);
		
		sum += curr;
		n++;
		
		if(curr > max) max = curr;
		if(curr < min) min = curr;
		
		printf("Would you like to add another element? (1/0) : ");
		scanf("%d", &wish);
		
	}while(wish == 1);
	
	sum -= max - min;
	float avg = sum / (n-2);
	printf("Trimmed average of n-1 elements : %f\n", avg);	
		
	return 0;
}
