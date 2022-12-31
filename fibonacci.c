#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	printf("Enter the number of");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
/*	for(int i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}*/
	for(c=a+b;c<=n;a=b,b=c)
	{
		printf("%d\t",c);
	}
	printf("\n");
}

