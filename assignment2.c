#include<stdio.h>
#include<math.h>
int binarysearch(int arr[], int n, int key)
{
	int i, low, high, mid;
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(arr[mid] < key)
low = mid + 1;
else if (arr[mid] == key) {
printf("%d found at location %d\n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}

int jumpsearch(int arr[],int n, int element)
{
	
   int jump_step,prev=0;
   jump_step=floor(sqrt(n));
   
   while(arr[prev]<element)
   {
       if(arr[jump_step]>element || jump_step>=n)
       {
            break;
       }
       else
       {
                prev=jump_step;
                jump_step=jump_step+floor(sqrt(n));
       }
   }
   
   while(arr[prev]<element)
   {
        prev++;
   }
   if(arr[prev]==element)
   {
        return prev+1;
   }
   else
   {
        return -1;
   }
}
	


int main()
{ 
     int s, c,result;
	int arr[]={1,2,3,4,5,6,7,8,9,10,13,15,18,19,23,25,27,31,35,42,47,49};
	printf("sizeof of array: %d\n", (int) sizeof(arr));
    int length = sizeof(arr)/sizeof(arr[0]);    
    printf("length of array: %d\n",length);
	printf("enter the search element");
	scanf("%d",&s);
	printf("enter the choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			binarysearch(arr,length,s);
		case 2:
			result=jumpsearch(arr,length,s);
			if(result==-1)
      {
            printf("\nElement is not found in the array !\n");
      }
      else
      {
            printf("\nElement %d is present at position %d",s,result);
      }
      break;
		default:
			printf("wrong entry");
	}
}
