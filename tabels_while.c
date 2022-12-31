#include<stdio.h>
int main()
{
	int a=1,b=1;
	while(a<=5)
	{
		b=1;
		while(b<=5)
		{
			printf("%3d",a*b);
			b++;
		}
		printf("\n");
		a++;
	}
}
