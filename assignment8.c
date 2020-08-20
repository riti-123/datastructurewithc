#include <stdio.h>
#include <string.h>
int main()
{
	
	int i,j;
  char a[100];
  int n ;

  printf("Enter a name\n");
  gets(a);

  n = strlen(a)-1;
  
    for(i=0;i<=n;i++)
   {
    	for(j=0;j<=i;j++)
	   {
	      printf("%c",a[j]);
       }
	    printf("\n");
    }
}




