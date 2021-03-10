# 2020cce

#第01週的實習課程設
```c
##第一題:進階題：分式化簡 
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
```
##第二題:進階題：讀入整數反序列印
```c
#include <stdio.h>
int main()
{
	int a[10],b=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0) break;
		else b++;
	}
	for(int i=b-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
```

##第三題:進階題：A的B次方函數
```c
#include <stdio.h>
int MYPOWER(int a, int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans*=a;
		
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
##第四題:進階題：漸增數列相加
```c
#include <stdio.h>
int main()
{
	int a,ans=0;
	scanf("%d", &a);
	for(int i=1;i<=a-1;i++)
	{
		ans+=i*(i+1);
	}
	printf("%d\n",ans);
}
```
##第五題:基礎題：找零錢
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%50%5);
}
```
##第六題:基礎題：因數個數 
```c
#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d", &a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			b++;
		}
	}
	printf("%d\n",b);
}
```
##第七題:基礎題：找倍數
```c
#include <stdio.h>
int main()
{
	int a[10],b=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]%3==0)
		{
			b++;
		}
	}
	printf("%d\n",b);
}
```
##第八題基礎題：整數轉換為等級
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a>=90) printf("A\n");
	else if(a>=80) printf("B\n");
	else if(a>=60) printf("C\n");
	else if(a<60)  printf("F\n");
}
```

#第02週的實習課程設
##第一題
```c
#include <stdio.h>
int main()
{
	int n1=10,n2=20,n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	int *p=&n1;
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	return 0;
}
```
##第二題
```c
#include <stdio.h>
int main()
{
	int n1=10,n2=20,n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	int *p=&n1;
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	int *p2=&n3;
	*p2=300;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	return 0;
}
```
##第三題
```c
#include <stdio.h>
int main()
{
	int n1=10,n2=20,n3=30;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	int *p=&n1;
	*p=200;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	int *p2=&n3;
	*p2=300;
	printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
	
	p2=p;
	*p2=400;
	printf("n1:%d n2:%d n3:%d\n",n1 ,n2, n3);
	return 0;
}
```
##第四題
```c
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
```


