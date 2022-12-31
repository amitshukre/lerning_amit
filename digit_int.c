#include <stdio.h>
int main()
{
	int data,i,count=0;
	printf("Enter data:");
	scanf("%d",&data);
	if (data==0)
	       count=1;
	//	printf("count=1\n");
/*	if(data!=0)
	for(i=data;i;i=i/10)
		count++;*/
    i=data;
	while(i)
	{
		count++;
		i=i/10;
	}
		
	printf("count=%d\n",count);
}
