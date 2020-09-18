#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	str=(char*)malloc(7);
	strcpy(str,"ritika");
	printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 13);
   strcat(str, "mishra");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return(0);
}

