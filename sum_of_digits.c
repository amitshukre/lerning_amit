#include<stdio.h>
int main()
{
	int data,i,sum=0;
	printf("Enter data:");
	scanf("%d",&data);
	for(i=data;i;i=i/10)
	{
		sum=sum+(i%10);
	}
	printf("sum=%d",sum);
}

