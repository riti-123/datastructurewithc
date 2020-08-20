#include<stdio.h>
void sort(int a[],int n){
	
  int temp,i,j;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n-1;j++)
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
void swap(int a[],int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(a[i]==a[j]*2)
		{
		  c=a[i];
		  a[i]=a[j];
		  a[j]=c;	
		}
	}
	}
}
int main()
{
	int i;
	int a[]={1,2,3,6,7,4,18,9,12,14,11,22,13,26,15,30,17,34};
	int length=sizeof(a)/sizeof(a[0]);;
    sort(a,length);
	printf("\n The sorted array is\n");
    for(i=0;i<length;i++)
    printf("%d\t",a[i]);
    swap(a,length);
    
	printf("\n after swaping \n");
    for(i=0;i<length;i++)
    printf("%d\t",a[i]);
}

