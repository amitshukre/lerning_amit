#include<stdio.h>
#include<math.h>
int main()
{
	int n,s,i;
	printf("Enter the number:");
	scanf("%d",&n);
	s=sqrt(n);
	for(i=2;i<=s;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==s+1)
		printf("%d is prime\n",n);
	else
		printf("%d is not prime\n",n);
}
