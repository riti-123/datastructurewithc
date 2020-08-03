#include<stdio.h>
int freq(int a[], int n)
{
    int i, count = 0,flag=0, d=0;
   for(i=0;i<n;i++)
   if(a[i]==2)
   count++;
    printf("frequency of %d is %d\n",2,count);
    
    for(i=0;i<n;i++)
   if(a[i]==3)
   flag++;
    printf("frequency of %d is %d\n",3,flag);
    
    for(i=0;i<n;i++)
   if(a[i]==5)
   d++;
    printf("frequency of %d is %d",5,d);
}
int main()
{
int arr[]={1,2,1,2,4,5,3,4,5,6,7,8,7,6,5,4,3,2,3,4,5,6,5,3,2,3,4,5,6,7,8,6,5,4,3,2,2,3,3,4,5,3,2,1,2,3,4,5,6,7,8};
printf("sizeof of array: %d\n", (int) sizeof(arr));
int length = sizeof(arr)/sizeof(arr[0]);    
printf("length of array: %d\n",length);
freq(arr,length);
}


