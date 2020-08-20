#include<stdio.h> 
#include <stdlib.h> 
#define MAX 3
  
int function(int a[]) 
{ 
    int x ,i; 
  
    printf("enter the value of x");
    scanf("%d",&x);
    if (MAX<x) 
    { 
        printf("array complete\n"); 
        fprintf(stderr, "no elements are entered\n"); 
        exit(EXIT_FAILURE); 
    } 
    else
    { 
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    printf("%d",a[i]);
    } 
    
} 

int main() 
{ 
    int arr[MAX]; 
    function(arr); 
    return 0; 
} 

