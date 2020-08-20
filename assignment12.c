#include<stdio.h>
void shuffleArray(int arr[], int n) 
{ 
if (arr == NULL || n % 2 == 1) 
        return; 
int currIdx = (n - 1) / 2; 
   
    while (currIdx > 0) 
    { 
        int count = currIdx, swapIdx = currIdx; 
      
        while (count-- > 0)  
        { 
            int temp = arr[swapIdx + 1]; 
            arr[swapIdx + 1] = arr[swapIdx]; 
            arr[swapIdx] = temp; 
            swapIdx++; 
        } 
          
        currIdx--; 
    } 
            
}
int main() 
{ 
    int a[] = { 2,5,1,3,4,7 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    int i;
    shuffleArray(a, n); 
  
    for (i = 0; i < n; i++)  
        printf("%d\t",a[i]);
  
    return 0; 
} 
