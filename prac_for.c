#include<stdio.h>
int main()
{
	int  a,b;
	for(a=1;a<=5;a++,printf("\n"))
		for(b=1;b<=10;b++)
			printf("%3d",a*b);
}
