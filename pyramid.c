#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++,printf("\n"))
	{
		for(b=1;b<=5-a;b++)
			printf(" ");
		for(b=1;b<=a;b++)
			printf("* ");
	}
}
