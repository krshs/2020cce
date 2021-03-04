#include <stdio.h>
int main()
{
	int a,b,c,A,B;
	scanf("%d%d", &a, &b);
	A=a;
	B=b;
	c=a%b;
	while(c!=0)
	{
	 a=b;
	 b=c;
	 c=a%b;
	}
	printf("%d %d\n",A/b,B/b);
}
