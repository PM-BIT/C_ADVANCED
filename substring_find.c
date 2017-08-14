/// This code finds if a string needle is a substring of string  haystack///







#include<stdio.h>
#include<string.h>

char* my_strstr(char* haystack , char* needle)
{
int flag=0;
if (haystack==NULL || needle==NULL)
{
return NULL;
}
while (*haystack!='\0')
{
	if (*haystack == *needle)
	{
		const char* h= haystack;
		const char* n = needle;
		while(*n!='\0'&& *h==*n)
		{
			h++;
			n++;
			
		}
		if(*n=='\0')
		{
			return (char*) haystack;
			flag=1;
		}
	}
	haystack++;



}


	
	

}
int main ()
{
char* mainstring="Hello Prabhakar Mishra !!!";
char* sub="Prabhakar";
printf("%x IS THE ADRESS OF FIRST CHARACTER OF SUBSTRING\n",my_strstr(mainstring,sub));
printf("%c is the first character of substring\n",*(my_strstr(mainstring,sub)));
return 0;


}
