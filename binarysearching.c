#include<stdio.h>
int binsearch(int b[],int n,int item)
{
  int l=0,u=n-1,m;
  
  while(u>=l)
  {
  	m=(l+u)/2;
    if(b[m]==item)
	{
      printf("successfully, item found at index %d",m);
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

int main(){
   
   int i, j, n, temp, a[25],item;

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
 
   
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d\n",a[i]);
      
    printf("enter the element u want to be searched");
	scanf("%d",&item);  

binsearch(a,n,item);
}

