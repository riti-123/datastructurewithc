#include<stdio.h>
int seqsearch(int l[], int n, int item)
{
   int i, flag = 1;
   for(i=0;i<=n-1;i++)
   {
   if(l[i]==item){
   flag=0;
   printf("search successful");
   printf("item %d",l[i]);
   }
   }
   if(flag==1)
   printf("search unsuccessful");
}
int main()
{
int a[100],n,j,item;
printf("enter the size of array");
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
printf("enter the item you want to be searched");
scanf("%d",&item);
seqsearch(a,n,item);
}

