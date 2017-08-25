#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* ptr;
	char* char_ptr;
	
	ptr= (int*) malloc(5*sizeof(int));
	char_ptr= (char*) calloc(5,sizeof(char));
	
	printf(" value stored by malloc is %d \n",*ptr);
	printf(" value stored by calloc is %d \n",*char_ptr);
	
	
}