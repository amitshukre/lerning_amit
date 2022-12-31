#include<stdio.h>
int main()
{
	
	int data=0,bit;
	printf("\t symbol\tACSII\tBInary\n ");
	while(data<=127)
	{printf("%c\t%d\t",data,data);
	bit=7;
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}
	
	printf("\n");
	data++;
	}
}
			
