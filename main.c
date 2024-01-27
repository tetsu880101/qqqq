#include <stdio.h>
#include <stdlib.h>
/*輸出 1 到 100 之間的奇數*/
int main()
{
	 int a,b,c,d;
	 for (a=1;a<=100;a++)
	 {
	  if(a%2==1)	       
	  printf("%d/",a);     //輸出奇數
	 }
	 while(a<5)
		 a++;
	 system("pause");
	 return 0;
}
