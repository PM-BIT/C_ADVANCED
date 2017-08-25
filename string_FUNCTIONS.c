#include<stdio.h>




////IMPLEMENT strlen function to find the length ///

int len(char* s)
{
	int length=0;
	char*char_ptr=s;
	while(*char_ptr!='\0')
	{
		length++;
		char_ptr++;
	}
	return (length);
}






////Copy one string to another ///

void xstrcpy(char* target ,char* source)
{
	while(*source!='\0')
	{
		*target=*source;
		target++;
		source++;
	}
	*target='\0';   /// to mark the end of string
	
	
}

///Function to compare two strings.It will return 1 if both the strings are equal else 0. ///

int xstrcmp(char* string1,char* string2)
{
	int flag=0;
	while (*string1 ==*string2)
	{
		string1++;
		string2++;
		if (*string1=='\0' && *string2=='\0')
			{
				return (1);
			}

	}
	return (0);
	
}


int main()
{
	char name[]="PRABHAKAR";
	
	char* c_ptr=name; ///stores the pointer location of first character of name.
	char* tem_ptr=name;
	
     char* source="My India";
	 char dest[12];
	
	char* s1="Prabhakar";
	char* s2="Prabhakarm";
	printf("Length of  %s is %d\n",name,len(tem_ptr));
	xstrcpy(dest,source);
	printf("%s\n",dest);
	printf("%d",xstrcmp(s1,s2));
	
	
	}



  