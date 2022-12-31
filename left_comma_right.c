#include<stdio.h>
int main()
{
	int a=2,b=4,c=0;
	c=(a,b=c);
	printf("a=%d b=%d c=%d\n",a,b,c);
}
