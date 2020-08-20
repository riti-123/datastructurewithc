#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int seqsearch(int l[], int n, int item)
{
   int i, flag = 1;
   for(i=0;i<=n-1;i++)
   {
   if(l[i]==item){
   flag=0;
   printf("item %d is present at location %d\n",l[i],i);
   }
   }
   if(flag==1)
   printf("search unsuccessful");
}
int binsearch(int b[],int n,int item)
{
  int l=0,u=n-1,m;
  
  while(u>=l)
  {
  	m=(l+u)/2;
    if(b[m]==item)
	{
      printf("successfully, item found at index %d\n",m);
      return;
    }
    else if(item >b[m])
  {
    l=m+1;
  }
    else
  {
     u=m-1; 
  }
}
   printf("search unsuccessful");
}
void selection_sort(int a[], int n)
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void bubble_sort(int a[],int size)
{
  int temp,i,j;
  for(i=0;i<size;i++)
  {
   for(j=0;j<size-1;j++)
   {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
  }
 }
}


 
void mergesort(int a[],int i,int j)
{
	int mid;
		
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
}


void insertion_sort(int arr[], int size)
{
 int i,j,tmp;
 for(i=0; i<size; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[j]>arr[j+1])
    {
      tmp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=tmp;
    }
    else
      break;
   }
 }
}
 
int merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first list
	j=i2;	//beginning of the second list
	k=0;
	
	while(i<=j1 && j<=j2)	//while elements in both lists
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	
	while(i<=j1)	//copy remaining elements of the first list
		temp[k++]=a[i++];
		
	while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=a[j++];
		
	//Transfer elements from temp[] back to a[]
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}
int main()
{
	int i,a[100],n,c,x;
	printf("enter the number of element\n");
	scanf("%d",&n);
	printf("enter element\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter a choice\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			
            printf("enter the item you want to be searched");
            scanf("%d",&x);
            seqsearch(a,n,x);
		    main();
			break;
		case 2:
			printf("enter the element u want to be searched");
	        scanf("%d",&x);  

            binsearch(a,n,x);
			main();
			break;
		
		case 3:
			selection_sort(a,n);
            printf("\n\nAfter sorting:\n");
            for(i=0; i<n; i++)
            printf("%d\t", a[i]);
			main();
			break;
		case 4:
			bubble_sort(a,n);
			printf("\n The sorted array is\n");
            for(i=0;i<n;i++)
            printf("%d\t",a[i]);
			main();
			break;
		case 5:
			insertion_sort(a,n);
            printf("\n\t------- Insertion sorted elements using function -------\n\n");
            for(i=0; i<n; i++)
    printf(" %d\t",a[i]);
			main();
			break;
		case 6:
	        mergesort(a,0,n-1);
	        printf("\nSorted array is :");
	        for(i=0;i<n;i++)
		    printf("%d\t ",a[i]);
			main();
			break;
		case 7:
			exit(0);
		default:
			printf("invalid choice");
	}
}

