#include<stdio.h>
int main()
{
	int data,bit;
	printf("Enter the value of data &bit:");
	scanf("%d %d",&data,&bit);
        data=(data|(1<<bit));
	printf("data=%d\n",data);
}
