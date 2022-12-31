#include<stdio.h>
int main()
{
	int x,y,flag,count=0,temp;
	printf("Enter two integers x and y:");
	scanf("%d %d",&x,&y);
	if(y==x)
	{
		flag=1;
		goto END;
	}
	for(temp=x;temp>1;temp=temp/y)
	{
		if(temp%y==0)
		{
			count++;
			continue;
		}
		else
		{
			flag=1;
			break;
		}
	}
   END:
	if(flag==1)
	{
		if(x==y)
			printf("%d is 1 power of %d\n",x,y);
		else
			printf("%d is not power of %d\n",x,y);
	}
	else
		printf("%d is %d power of %d\n",x,count,y);
}
