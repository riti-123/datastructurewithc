#include <stdio.h>

// Utility function to find minimum of two numbers
int min(int x, int y) {
	return (x < y) ? x : y;
}

// Binary search algorithm to return the position of
// target x in the sub-array arr[low..high]
int BinarySearch(int arr[], int low, int high, int x)
{
	// Base condition (search space is exhausted)
	if (low > high)
		return -1;

	// we find the mid value in the search space and
	// compares it with target value

	int mid = (low + high)/2;	// overflow can happen
	// int mid = low + (high - low)/2;

	// Base condition (target value is found)
	if (x == arr[mid])
		return mid;

	// discard all elements in the right search space
	// including the mid element
	else if (x < arr[mid])
		return BinarySearch(arr, low, mid - 1, x);

	// discard all elements in the left search space
	// including the mid element
	else
		return BinarySearch(arr, mid + 1, high, x);
}

// Returns the position of target x in the given array of length n
int ExponentialSearch(int arr[], int n, int x)
{
	int bound = 1;

	// find the range in which the target x would reside
	while (bound < n && arr[bound] < x)
		bound *= 2;	// calculate the next power of 2

	// call binary search on arr[bound/2 .. min(bound, n)]
	return BinarySearch(arr, bound/2, min(bound, n), x);
}

// Exponential search algorithm
int main()
{
	
   
   int j,  n,  arr[25],target;

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   
   for(j=0;j<n;j++)
      scanf("%d",&arr[j]);
 
   
    printf("enter the element u want to be searched");
	scanf("%d",&target); 
	int index = ExponentialSearch(arr, n, target);

	if (index != -1)
		printf("Element found at index %d", index);
	else
		printf("Element not found in the array");

	return 0;
}
