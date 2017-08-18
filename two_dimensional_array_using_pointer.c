#include<stdio.h>

int main()
{

int a[2][3]={1,2,3,4,5,6};

int (*ptr)[3]=a;
printf("%d\n",**ptr);
printf("%d\n",*(*(ptr+0)+2));/// a[0][2] printed///
printf("%d\n",*(*(ptr+1)+1));/// a[1][1] printed///


}