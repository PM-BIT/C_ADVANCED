#include <stdio.h>
int main()
{
	int radius=78;
	int* radiusPtr;
	int arr[4]={1,3,5,7};
	char charArray[4]={'a','b','c','d'};
	char* charPtr=charArray;
	int* arrPtr;
	radiusPtr=&radius;
	arrPtr=arr;
	printf("The radius is  stored at %p\n",radiusPtr);
	printf("The Array arr starts at %p\n",arrPtr);
	printf("The last element of array is  stored at %p\n",arrPtr+3);
	printf("The last element value of array is  %p\n",*(arrPtr+3));
	printf("The last character of charArray is stored at  %p\n",charPtr+3);
	printf("The last character of charArray is  %c\n",*(charPtr+3));
	
	
	///String in c ///
	
	
	char* strPtr= "hELLO wORLD";
	
	
	///Print all the words of string using pointers///
	while(*(strPtr))
	{
		printf("%c",(*strPtr));
		strPtr++;
	}
	

	
}