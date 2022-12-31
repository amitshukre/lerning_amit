#include<stdio.h>
int main()
{
	int data,bit;
	printf("Enter value of data:");
	scanf("%d",&data);
        bit=31;
TEST:
	if((data>>bit)&1)
		printf("1");
	else
		printf("0");
	bit--;
	if(bit>=0)
		goto TEST;
	printf("\n");
}

