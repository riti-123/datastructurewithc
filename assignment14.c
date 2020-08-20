#include <stdio.h>
 
int main()
{
	int arr[]={1,2,4,2,3,5,4,7,6,5,8,6,7,6,5,4,5,4,5,4,3,2,1,2,3,4,5,6,7,8,9,0,9,8,9,0,9,8,7,8,7,6,7,6,5,3};
	int i,j,k;
	
	int n=sizeof(arr) / sizeof(arr[0]);
	
 
	for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < n; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				n--;
				j--;
			}
		}
	}

 	printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
 	for (i = 0; i < n; i++)
  	{
 		printf("%d\t", arr[i]);
  	}	     
 	return 0;
}

