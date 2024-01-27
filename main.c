#include <stdio.h>
#include <stdlib.h>
/*輸出 1 到 100 之間的奇數*/
int main()
{
	 int a;
	 for (a=1;a<=100;a++)
	 {
	  if(a%2==1)	       
	  printf("%d/",a);     //輸出奇數
	 }
	 system("pause");
	 return 0;
}