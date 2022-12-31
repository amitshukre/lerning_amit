#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b&c:");
	scanf("%d %d %d",&a,&b,&c);


    ((a>b)&&(a>c))?printf("a is max\n"):

    ((b>a)&&(b>c))?printf("b is max\n"):

    ((c>a)&&(c>b))?printf("c is max\n"):
    ((a==b)&&(a>c))?printf("a&b are max\n"):
     ((a==c)&&(a>b))?printf("a&c are max\n"):
      ((c==b)&&(c>a))?printf("c&b are max\n"):
       printf("a,b&c are max\n");
       
}
