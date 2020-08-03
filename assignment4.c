#include<stdio.h>
int swap(int array[9],int n)
{ 
    int c, end=n-1;
	for (c = 0; c < n/2; c++) {
    array[c]= array[c]+array[end];
    array[end]= array[c]-array[end];
    array[c] = array[c]-array[end];
 
    end--;
  }
 
  printf("Reversed array elements are:\n");
 
  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	
    printf("sizeof of array: %d\n", (int) sizeof(arr));
    int length = sizeof(arr)/sizeof(arr[0]);    
    printf("length of array: %d\n",length);
	swap(arr,length);
}
