#include<stdio.h>
int main()
{
	int a,fact=1;
	printf("Enter the value:");
	scanf("%d",&a);
	for(int i=a;i;i--)
	{
		fact*=i;
	}
	printf("factorial=%d",fact);
}


