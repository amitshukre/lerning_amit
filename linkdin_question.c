#include<stdio.h>
void fun(char *s)
{
	int i=0;
	while(s[i])
	{
		if(s[i]>'A'||s[i]<'Z')
			s[i]=s[i]+32;
		i++;
	}
}
int main()
{
	const char str[15]="AUTOSAR123";
	char s[15]="emBEdded";
	fun(str);
	printf("%s\n",str);
	void fun(s);
	printf("%s\n",s);
}

