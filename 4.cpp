#include <stdio.h>
int main()
{
	int n[3]={10, n2=20, n3=30};
	printf("n[0]:%d n[1]:%d n[2]:%d\n",n1, n2, n3);
	
	int *p=&n[0];
	*p=200;
	printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0], n[1], n[2]");
	
	int *p2=&n[2];
	*p2=300;
	printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0], n[1], n[2]");
	
	p2=p;
	*p2=400;
	printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0], n[1], n[2]");
	
	return 0;

}