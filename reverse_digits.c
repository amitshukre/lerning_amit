#include<stdio.h>
int main()
{
	int data,i,rev=0;
	printf("enter the data:");
	scanf("%d",&data);
	for(i=data;i;i=i/10)
	{
		rev=rev*10+(i%10);
	}
	printf("reverse digit is:%d\n",rev);
}

