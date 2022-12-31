#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the charcter:");
	scanf("%c",&ch);
//	if((ch>='A')&&(ch<='Z'))
//		ch+=32;
//	else
//		ch-=32;

	ch^=32;
	printf("ch=%c\n",ch);
}
