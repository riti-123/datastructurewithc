#include <stdio.h>
#include<math.h>
int BinarySearch(int arr[], int low, int high, int x)
{
	if (low > high)
		return -1;
	int mid = (low + high)/2;	

	
	if (x == arr[mid])
		return mid;

	else if (x < arr[mid])
		return BinarySearch(arr, low, mid - 1, x);

	else
		return BinarySearch(arr, mid + 1, high, x);
}

int ExponentialSearch(int arr[], int n, int x)
{
	int bound = 1;
	while (bound < n && arr[bound] < x)
		bound *= 2;	
	return BinarySearch(arr, bound/2, bound, x);
}

int interpolationSearch(int arr[], int n, int x) 
{ 
    
    int lo = 0, hi = (n - 1); 
   
    while (lo <= hi && x >= arr[lo] && x <= arr[hi]) 
    { 
        if (lo == hi){ 
            if (arr[lo] == x) return lo; 
            return -1; 
        } 
        int pos = lo + (((double)(hi-lo) / 
              (arr[hi]-arr[lo]))*(x - arr[lo])); 
  
        
        if (arr[pos] == x) 
            return pos; 
  
        
        if (arr[pos] < x) 
            lo = pos + 1; 
  
        
        else
            hi = pos - 1; 
    } 
    return -1; 
} 

int main()
{
	
   
   int j,  n,  arr[25],target,c,index;

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   
   for(j=0;j<n;j++)
      scanf("%d",&arr[j]);
 
   
    printf("enter the element u want to be searched");
	scanf("%d",&target); 
	printf("enter your choice");
	scanf("%d",&c);
	
	switch(c)
	{
	case 1:
	   index = ExponentialSearch(arr, n, target);

	   if (index != -1)
		printf("Element found at index %d\n", index);
	   else
		printf("Element not found in the array");

	case 2:
		
    index = interpolationSearch(arr, n, target); 
  
    // If element was found 
    if (index != -1) 
        printf("Element found at index %d", index); 
    else
        printf("Element not found."); 
		
}
}
