#include<stdio.h>
int findfrequency(int a[], int n)
{
	int freq[n] , i;
	
	for( i=0;i<n;i++)
	freq[i]=0;
	
	for( i=0;i<n;i++)
	freq[a[i]]++;
	
	for( i=0;i<n;i++)
	   if(freq[i])
	      printf("%d appears %d times\n",i,freq[i]);
}
int main()
{
	int arr[]={1,2,4,2,3,5,4,7,6,5,8,67,6,5,4,5,4,5,4,3,2,1,2,3,4,5,6,7,8,9,0,9,8,9,0,9,8,7,8,7,6,7,6,5,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	findfrequency(arr,n);
}
