#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter the value of data & bit:");
	scanf("%d %d",&data,&bit);
        data=(data^(1<<bit));
	printf("%d\n",data);
}
