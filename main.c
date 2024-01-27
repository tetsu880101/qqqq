#include <stdio.h>
#include <stdlib.h>
/*輸出 1 到 100 之間的奇數*/
int add(int,int);
int main()
{
	 int a,b;
	a=5;
	b=5;
	printf("a+b=%d",add(a,b));


	 system("pause");
	 return 0;
}
int add(int a,int b)
{
	return a+b;
}