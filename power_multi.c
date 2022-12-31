#include<stdio.h>
int main()
{
	int x,y,result,i;
	printf("Enter the base and power values respectively:");
	scanf("%d %d",&x,&y);
	for(i=y,result=1;i;i--)
	{
		result=result*x;
	}
		printf("%d ^ %d is %d\n",x,y,result);
	
}	
