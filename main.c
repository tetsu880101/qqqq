#include <stdio.h>
#include <stdlib.h>
/*輸出 1 到 100 之間的奇數*/
int add(int,int);
int m(int,int);
int waru(int,int);
int main()
{
	 int a,b;
	a=5;
	b=5;
	printf("a+b=%d",add(a,b));

	printf("a-b=%d",m(a,b));

	printf("a/b=%d",waru(a,b));
	system("pause");
	 return 0;
}
int add(int a,int b)
{
	return a+b;
}
int m(int a,int b)
{

return a-b;
}
int waru(int a,int b)
{
        return a/b;
}
