///This code shows the difference between calloc and malloc///
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *arr1;
   int *arr0;
    
   // malloc() allocate the memory for 5 integers
   // containing garbage values
   arr0 = (int *)malloc(5 * sizeof(int)); // 5*4bytes = 20 bytes
     printf("%p\n",arr0);
	 printf("%d is value initialized  by malloc  \n ",*arr0);
	 
	 printf("Below will be calloc\n");
	 printf("-------------------------\n");
   // Deallocates memory previously allocated by malloc() function
   free( arr0 );
    
   // calloc() allocate the memory for 5 integers and
   // set 0 to all of them
   arr1 = (int *)calloc(5, sizeof(int));
    printf("%p\n",arr1);
	printf("%d is value initialized by calloc  \n ",*arr1);
   // Deallocates memory previously allocated by calloc() function
   free(arr1);
 
   return(0);
}  