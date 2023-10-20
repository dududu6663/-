#include <stdio.h>
int main()
{
	int a=10;
	int *b=&a;
	*b=3;
	printf("%d,",a);
	printf("%d",b);
 } 
 //  打印出的b是什么意思？是指a的地址吗？ 
 
