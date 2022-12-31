#include<stdio.h>
int main()
{
	int data=0;
	printf("Character\t ASCII\t Binaray\n");
LOOP:
	printf("%c\t %d\t",data,data);
     int bit=7;
BIN:
	if((data>>bit)&1)
		printf("1");
	else
		printf("0");
	bit--;
	if(bit>=0)
		goto BIN;
	printf("\n");
	data++;
	if(data<128)
		goto LOOP;
}
	
