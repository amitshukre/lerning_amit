#include <stdio.h>
int main()
{
	int a=-2,b=-4;
	while(++a && --b)
		printf("In loop a=%d,b=%d\n",a,b);
	printf("after loop:a=%d  b=%d\n",a,b);
}
