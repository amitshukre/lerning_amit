#include<stdio.h>
int main()
{
	int k;
	k=fun(3);
	printf("%d\n",k);
}

int fun(int a)
{
	int s;
	if(a==1)
		return (a);
	s=a+(fun(a-1));
	return(s);
}


