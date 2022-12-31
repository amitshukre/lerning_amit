#include<stdio.h>
#include <stdlib.h>
int add(int,int); 
int main()
{
	int x,y,s;
	
	printf("Enter two number:");
	scanf("%d %d",&x,&y);
	s=add(x,y);
		printf("%d\n",s);
}

int add(int a,int b)
 { 
	 int c;
	 c=a+b;
	 return(c);
 }

