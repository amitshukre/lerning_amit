#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter the data and bit values:");
	scanf("%d %d",&data,&bit);
        data=(data&~(1<<bit));
	printf("%d\n",data);
}

